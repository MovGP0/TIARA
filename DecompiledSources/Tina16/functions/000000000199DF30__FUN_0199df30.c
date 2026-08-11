/* Ghidra address: 0199df30 */
/* Ghidra symbol: FUN_0199df30 */


void FUN_0199df30(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int local_30;
  int local_2c;
  
  plVar1 = (longlong *)FUN_0198d430(param_1);
  (**(code **)(*plVar1 + 0x30))
            (plVar1,DAT_02110778 + -5,DAT_0211077c + -5,DAT_02110778 + 5,DAT_0211077c + 5);
  plVar1 = (longlong *)FUN_0198d430(param_1);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x1f0))(param_2,param_3,&local_2c,&local_30);
    uVar2 = FUN_0198d430(param_1);
    FUN_01a9a440(uVar2,3);
    plVar1 = (longlong *)FUN_0198d430(param_1);
    (**(code **)(*plVar1 + 0x68))(plVar1,local_2c,local_30,5);
    DAT_02110778 = local_2c;
    DAT_0211077c = local_30;
  }
  return;
}

