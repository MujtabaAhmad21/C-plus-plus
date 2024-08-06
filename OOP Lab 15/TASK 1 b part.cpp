//#include <iostream>
//using namespace std;
//
//void test(int var) 
//{
//    try
//    {
//        if (var == 1)
//        {
//            throw 1;
//        }
//        else if (var == 2)
//        {
//            throw 2.0f;
//        }
//        else if (var == 3)
//        {
//            throw "abc";
//        }
//        else if (var == 4)
//        {
//            throw 'a';
//        }
//    }
//    catch (int catchVar)
//    {
//        cout << "Encountered Integer Exception = " << catchVar << endl;
//    }
//    catch (float catchVar) 
//    {
//        cout << "Encountered Float Exception = " << catchVar << endl;
//    }
//    catch (const char* catchVar) 
//    {
//        cout << "Encountered String Exception = " << catchVar << endl;
//    }
//    catch (char catchVar)
//    {
//        cout << "Encountered Char Exception = " << catchVar << endl;
//    }
//}
//
//int main()
//{
//    int choice;
//    cout << "Please enter numbers for 1-4: ";
//    cin >> choice;
//    test(choice);
//
//    system("pause");
//    return 0;
//}