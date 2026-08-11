/* Ghidra address: 00782af0 */
/* Ghidra symbol: FUN_00782af0 */


void FUN_00782af0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00417580(local_38,&DAT_0076f818);
  local_20 = (longlong *)FUN_00797100(DAT_02012578);
  do {
    cVar1 = thunk_FUN_00797a55(local_20);
    if (cVar1 == '\0') {
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
      uVar2 = FUN_0044d710(&PTR_FUN_00777750,1,PTR_PTR_02002808);
      FUN_004134c0(uVar2);
      goto LAB_00782bb2;
    }
    FUN_007978e0(local_20,local_38);
  } while (local_30 != param_2);
  uVar2 = (**(code **)(local_28 + 0x230))(local_28,param_2);
  FUN_00782920(param_1,uVar2);
  FUN_00782bd0(0,local_40);
LAB_00782bb2:
  FUN_00417740(local_38,&DAT_0076f818);
  return;
}

