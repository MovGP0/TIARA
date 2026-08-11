/* Ghidra address: 0179cbe0 */
/* Ghidra symbol: FUN_0179cbe0 */


undefined1 FUN_0179cbe0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_9 = 0;
  if (DAT_01fa0b98 == (longlong *)0x0) {
    DAT_01fa0b98 = (longlong *)FUN_007fc180(&PTR_FUN_0178b908,1,param_2);
    FUN_0064dbe0(DAT_01fa0b98[0xea],0);
    FUN_007e2f80(DAT_01fa0b98[0x157],0);
    FUN_007e2f80(DAT_01fa0b98[0xed],0);
    FUN_0064dbe0(DAT_01fa0b98[0xe7],0);
    FUN_0064dbe0(DAT_01fa0b98[0xe6],0);
    FUN_007e2f80(DAT_01fa0b98[0x167],1);
    FUN_0064dbe0(DAT_01fa0b98[0x170],1);
    FUN_0064dbe0(DAT_01fa0b98[0x171],1);
    if (*param_3 == 0) {
      iVar2 = FUN_0179d0d0(*DAT_01fa0b98,param_3);
      if ((iVar2 == 2) || (*param_3 == 0)) {
        FUN_0179ce70(0,local_20);
        return local_9;
      }
      local_18 = FUN_00c3f320(*param_3);
    }
    else {
      local_18 = FUN_00c3f320(*param_3);
    }
    (**(code **)(*(longlong *)DAT_01fa0b98[0x1a3] + 0x80))
              ((longlong *)DAT_01fa0b98[0x1a3],*(undefined8 *)(local_18 + 0x10),local_18);
    FUN_01798270(DAT_01fa0b98);
    FUN_01798460(DAT_01fa0b98,0);
    FUN_017a0780(DAT_01fa0b98);
    sVar1 = FUN_00c3f0d0(DAT_01fa0b98[0x195],1 - (uint)(byte)*PTR_DAT_02002480);
    if (sVar1 != -1) {
      FUN_01798920(DAT_01fa0b98,1 - (uint)(byte)*PTR_DAT_02002480);
    }
    iVar2 = (**(code **)(*DAT_01fa0b98 + 0x2d0))(DAT_01fa0b98);
    if (iVar2 == 1) {
      lVar3 = (**(code **)(*(longlong *)DAT_01fa0b98[0x1a3] + 0x30))
                        ((longlong *)DAT_01fa0b98[0x1a3],0);
      if (local_18 != lVar3) {
        local_18 = (**(code **)(*(longlong *)DAT_01fa0b98[0x1a3] + 0x30))
                             ((longlong *)DAT_01fa0b98[0x1a3],0);
      }
      if (*param_3 == 0) {
        lVar3 = FUN_00c3f320(local_18);
        *param_3 = lVar3;
      }
      else {
        FUN_00c3f350(local_18,*param_3);
      }
      local_9 = 1;
    }
    FUN_00410f20(DAT_01fa0b98);
    DAT_01fa0b98 = (longlong *)0x0;
  }
  return local_9;
}

