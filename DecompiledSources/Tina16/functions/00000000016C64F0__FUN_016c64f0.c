/* Ghidra address: 016c64f0 */
/* Ghidra symbol: FUN_016c64f0 */


void FUN_016c64f0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 local_120 [256];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  puVar3 = &DAT_016c6670;
  iVar1 = FUN_00414f50(*(undefined8 *)(param_2 + 8),&DAT_016c6670,
                       (ulonglong)**(byte **)(param_2 + 8) + 1);
  if (iVar1 == 0) {
    uVar2 = FUN_0040c770(*(undefined8 *)(param_2 + 0x28));
    if (uVar2 < 0x10) {
      bVar4 = ((int)CONCAT62((int6)((ulonglong)puVar3 >> 0x10),1) << ((byte)uVar2 & 0x1f) & 0x18eU)
              != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      FUN_004154b0(&local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x318) + 0x10),0);
      FUN_004154b0(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x318) + 8),0);
      FUN_00415980(&local_10,4,local_18,&DAT_016c6684,local_20,&LAB_016c6694);
      FUN_00415560(local_120,local_10,0xff);
      FUN_016a4020(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x2a0) + 0x10),
                   0x15,local_120,0xffffffff);
    }
  }
  FUN_00414590(&local_20,3);
  return;
}

