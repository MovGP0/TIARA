/* Ghidra address: 0176a0f0 */
/* Ghidra symbol: FUN_0176a0f0 */


undefined4 FUN_0176a0f0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_48 [20];
  byte local_34;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_00c41090(*(longlong *)(param_1 + 0x68),0,0,0);
    if (lVar3 == 0) {
      lVar3 = FUN_00c41110(*(undefined8 *)(param_1 + 0x68));
    }
    uVar4 = FUN_00c3d330(lVar3,local_48,param_2);
    if (local_34 < 8) {
      uVar1 = (int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (local_34 & 0x1f);
      uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 10) != 0);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

