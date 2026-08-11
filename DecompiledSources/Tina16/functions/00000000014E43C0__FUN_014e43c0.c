/* Ghidra address: 014e43c0 */
/* Ghidra symbol: FUN_014e43c0 */


void FUN_014e43c0(undefined8 param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 local_40 [32];
  
  lVar1 = FUN_016b9cb0(param_3);
  FUN_01d0f0e0(*(undefined8 *)(lVar1 + 0x28e),param_1);
  *(undefined8 *)(lVar1 + 0x26a) = param_1;
  *(short *)(lVar1 + 0x260) = *(short *)(lVar1 + 0x260) + 1;
  if (*(ushort *)(lVar1 + 0x260) == 2) {
    dVar2 = (double)FUN_01d0f3b0(*(undefined8 *)(lVar1 + 0x28e),0);
    dVar3 = (double)FUN_01d0f3b0(*(undefined8 *)(lVar1 + 0x28e),1);
    *param_2 = dVar2 <= dVar3;
  }
  else {
    dVar2 = (double)FUN_01d0f3b0(*(undefined8 *)(lVar1 + 0x28e),*(ushort *)(lVar1 + 0x260) - 2);
    dVar3 = (double)FUN_01d0f3b0(*(undefined8 *)(lVar1 + 0x28e),*(ushort *)(lVar1 + 0x260) - 1);
    if ((bool)*param_2 != dVar2 <= dVar3) {
      local_40[0] = 0;
      FUN_016a4020(*(undefined8 *)(param_3 + 0x10),0x18,local_40,0xffffffff);
    }
  }
  return;
}

