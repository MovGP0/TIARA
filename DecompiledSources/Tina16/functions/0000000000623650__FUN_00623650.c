/* Ghidra address: 00623650 */
/* Ghidra symbol: FUN_00623650 */


undefined8 FUN_00623650(longlong param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_48;
  uint local_44;
  longlong local_40 [2];
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))
                    (*(longlong **)(param_1 + 0x70),local_40);
  FUN_006245b0(uVar2);
  uVar1 = *(ushort *)(local_40[0] + 0x34);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x98))(*(longlong **)(param_1 + 0x70),local_40[0]);
  uVar5 = (uint)uVar1;
  iVar4 = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x48))
                        (*(longlong **)(param_1 + 0x70),iVar4,&local_44);
      FUN_006245b0(uVar2);
      if ((local_44 & 3) == param_3) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x40))
                          (*(longlong **)(param_1 + 0x70),iVar4,&local_48);
        FUN_006245b0(uVar2);
        uVar3 = FUN_0041b800(param_2);
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                          (*(longlong **)(param_1 + 0x70),local_48,uVar3);
        FUN_006245b0(uVar2);
        return param_2;
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_0041b800(param_2);
  return param_2;
}

