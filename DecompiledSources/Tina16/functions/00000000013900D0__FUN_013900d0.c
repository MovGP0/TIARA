/* Ghidra address: 013900d0 */
/* Ghidra symbol: FUN_013900d0 */


void FUN_013900d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short sVar3;
  undefined8 in_RAX;
  bool bVar4;
  
  if (*(byte *)(param_1 + 0x4c8) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x4c8) & 0x1f)
            & 0x28U) != 0;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (*(longlong *)(param_1 + 0x13b0) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4d0) + 0x128);
    sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (sVar3 != 0x3e) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4d0) + 0x128);
      sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (sVar3 != 0x66) {
        puVar2 = *(undefined8 **)(param_1 + 0x13b0);
        *puVar2 = *(undefined8 *)(param_1 + 5000);
        puVar2[1] = *(undefined8 *)(param_1 + 0x1390);
        puVar2[2] = *(undefined8 *)(param_1 + 0x1398);
        puVar2[3] = *(undefined8 *)(param_1 + 0x13a0);
        *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x13a8);
        *(undefined8 *)(param_1 + 0x13b0) = 0;
      }
    }
  }
  return;
}

