/* Ghidra address: 01a65f30 */
/* Ghidra symbol: FUN_01a65f30 */


void FUN_01a65f30(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
  uVar4 = FUN_0069e8a0();
  uVar4 = FUN_0069dc70(uVar4);
  iVar2 = thunk_FUN_03e5bd07(uVar4,4);
  uVar4 = FUN_0069e8a0();
  uVar4 = FUN_0069dc70(uVar4);
  iVar3 = thunk_FUN_03e5bd07(uVar4,6);
  dVar6 = (*(double *)(*(longlong *)(lVar1 + 0xc0) + 0x50) -
          *(double *)(*(longlong *)(lVar1 + 0xb8) + 0x50)) * (double)iVar2;
  dVar5 = (*(double *)(*(longlong *)(lVar1 + 0xd0) + 0x50) -
          *(double *)(*(longlong *)(lVar1 + 200) + 0x50)) * (double)iVar3;
  if (*PTR_DAT_020033c0 == '\x03') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6d0),
                 *(double *)(*(longlong *)(lVar1 + 0xb8) + 0x50) * (double)iVar2);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),
                 (1.0 - *(double *)(*(longlong *)(lVar1 + 0xc0) + 0x50)) * (double)iVar2);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),
                 *(double *)(*(longlong *)(lVar1 + 200) + 0x50) * (double)iVar3);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),dVar6 / dVar5);
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6d0),
                 (*(double *)(*(longlong *)(lVar1 + 0xb8) + 0x50) * (double)iVar2) / 25.4);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),
                 ((1.0 - *(double *)(*(longlong *)(lVar1 + 0xc0) + 0x50)) * (double)iVar2) / 25.4);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),
                 (*(double *)(*(longlong *)(lVar1 + 200) + 0x50) * (double)iVar3) / 25.4);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),dVar6 / dVar5);
  }
  return;
}

