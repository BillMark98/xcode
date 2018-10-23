//
//  main.cpp
//  versuch_8
//
//  Created by Bill on 17/6/26.
//  Copyright © 2017年 Bill. All rights reserved.
//

/*
 * Praktikum Informatik 1 MMXVII
 * Versuch 08: Taschenrechner
 *
 * Datei:  taschenrechner.cpp
 * Inhalt: Hauptprogramm
 */

#include <iostream>
#include "expression.h"
#include "const.h"
#include "result.h"
#include "add.h"
#include "mul.h"
#include "sub.h"
#include "div.h"

void testConst()
{
    Const c(4);
	c.print();
        std::cout << " = " << c.evaluate() << std::endl;
}

void testResult()
{
    Result res ( new Const(4) );
	res.print();
        std::cout << " = " << res.evaluate() << std::endl;
}

void testAddConst()
{
    Result res (new Add (
				new Const(7),
				new Const(8)
				)
			);
	res.print();
        std::cout << " = " << res.evaluate() << std::endl;
}

void testMulAddConst()
{
	Result res (	new Add (
					new Const(4),
					new Mul (
						new Const(9),
						new Const(5)
					)
				)
			);
	res.print();
	std::cout << " = " << res.evaluate() << std::endl;
}

void testSubMulAddConst()
{
	Result res (new Add (
					new Const(4),
					new Mul (
						new Const(9),
						new Sub (
							new Const(7),
							new Const(2)
						)
					)
				)
			);
	res.print();
	std::cout << " = " << res.evaluate() << std::endl;
}


void finalTest()
{



	Result res (new Add (
					new Const(4),
					new Mul (
						new Const(9),
				new Sub (
							new Const(7),
							new Div (
								new Const(10),
								new Const(5)
								)
							)
						)
					)
		   );

	res.print();
	std::cout << " = ";
	std::cout << res.evaluate();
	std::cout << std::endl;

// Das Ergebnis sollte etwa so aussehen:
//// (4 + (9 * (7 - (10 / 5)))) = 49
//
}

int main()
{
    using namespace std;
     //Implementieren Sie zuerst die Klassen Const und Result und testen Sie das Ergebnis.
    testConst();
    cout<<"\nIt's now testResult"<<endl;
    testResult();
    cout<<"\nIt's testConstAdd"<<endl;
    // Erg‰nzen Sie ihr Programm nach und nach um weitere Rechenoperationen
    testAddConst();
    cout<<"\nIt's testMulAddConst\n";
    testMulAddConst();
    cout << "\n Its testSubMulAddConst\n";
    testSubMulAddConst();
    std::cout << "\nDer finale Test: kommt noch..." << std::endl;
    finalTest();
    
    return 0;
}

