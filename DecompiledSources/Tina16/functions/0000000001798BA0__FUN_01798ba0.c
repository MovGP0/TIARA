/* Ghidra address: 01798ba0 */
/* Ghidra symbol: FUN_01798ba0 */


void FUN_01798ba0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_01795d10(param_1);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1 + 0xc98,L"NONAME.DDB");
    FUN_01794150(param_1,*(undefined8 *)(param_1 + 0xd18));
    FUN_017941c0(param_1);
    FUN_01795670(param_1,0);
    FUN_01798270(param_1);
    FUN_01798460(param_1,0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
              (*(longlong **)(param_1 + 0x758),0xffffffff);
    FUN_017989e0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x268))(*(longlong **)(param_1 + 0xc38),0);
  }
  return;
}

