/* Ghidra address: 016e5440 */
/* Ghidra symbol: FUN_016e5440 */


void FUN_016e5440(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  bool bVar3;
  undefined1 local_21;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (param_2 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_2 & 0x1f) & 0xe2U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    if (*(int *)(param_1 + 0x3c) < -1) {
      uVar2 = FUN_016eebb0(*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x38),0);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
    if ((*(byte *)(lVar1 + 0x88) & 0x20) == 0) {
      if ((*(byte *)(lVar1 + 0x88) & 2) != 0) {
        *(undefined8 *)(*(longlong *)(lVar1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8)
             = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_00dab4f0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(param_1 + 0x10),
                   *(undefined8 *)
                    (*(longlong *)(lVar1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8),
                   *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                   *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x60),
                   *(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x90),0,
                   *(undefined1 *)(param_1 + 0x44),param_1 + 8,param_1 + 0x20,param_1 + 0x98,
                   param_1 + 0xa0,&local_20,&local_21,*(undefined1 *)(param_1 + 0xb0),
                   0x4000000000000000);
      *(undefined8 *)(*(longlong *)(lVar1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           local_20;
    }
    else {
      *(undefined8 *)(*(longlong *)(lVar1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 0x18);
    }
  }
  return;
}

