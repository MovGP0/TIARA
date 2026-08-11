/* Ghidra address: 00804440 */
/* Ghidra symbol: FUN_00804440 */


void FUN_00804440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  undefined4 uVar3;
  
  sVar2 = thunk_FUN_040bd713(0x12);
  if (-1 < sVar2) {
    if (*(short *)(param_2 + 8) == 9) {
      sVar2 = thunk_FUN_040bd713(0x11);
      if (-1 < sVar2) {
        sVar2 = thunk_FUN_040bd713(0x10);
        FUN_0065c1f0(param_1,*(undefined8 *)(param_1 + 0x4c0),-1 < sVar2,1);
        *(undefined8 *)(param_2 + 0x18) = 1;
        return;
      }
    }
    else if ((ushort)(*(short *)(param_2 + 8) - 0x25U) < 4) {
      lVar1 = *(longlong *)(param_1 + 0x4c0);
      if (lVar1 == 0) {
        return;
      }
      sVar2 = *(short *)(param_2 + 8);
      if ((sVar2 == 0x27) || (sVar2 == 0x28)) {
        uVar3 = (undefined4)CONCAT71((uint7)(byte)((ushort)sVar2 >> 8),1);
      }
      else {
        uVar3 = 0;
      }
      FUN_0065c1f0(*(undefined8 *)(lVar1 + 0x78),lVar1,uVar3,0);
      *(undefined8 *)(param_2 + 0x18) = 1;
      return;
    }
  }
  FUN_0065a1b0(param_1,param_2);
  return;
}

