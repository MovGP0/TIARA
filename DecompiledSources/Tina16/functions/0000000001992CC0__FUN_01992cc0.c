/* Ghidra address: 01992cc0 */
/* Ghidra symbol: FUN_01992cc0 */


void FUN_01992cc0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,char param_6,longlong param_7)

{
  longlong *plVar1;
  uint uVar2;
  
  uVar2 = param_5;
  plVar1 = (longlong *)FUN_017c0440(0,&PTR_FUN_017c0190,param_2,param_3,param_4,param_5,0);
  if (plVar1 != (longlong *)0x0) {
    plVar1[0x7e] = param_7;
    if (param_6 != '\0') {
      (**(code **)(*plVar1 + 0xa0))(plVar1,param_1[0x42]);
    }
    (**(code **)(*param_1 + 0x20))(param_1,plVar1);
  }
  FUN_019a53e0(param_1,plVar1);
  uVar2 = uVar2 & 0xffffff00;
  FUN_019916f0(param_1,param_2,param_3,plVar1,0,uVar2);
  FUN_019916f0(param_1,param_4,param_5,plVar1,0,uVar2 & 0xffffff00);
  return;
}

