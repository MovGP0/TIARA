/* Ghidra address: 00c8bb80 */
/* Ghidra symbol: FUN_00c8bb80 */


undefined1 FUN_00c8bb80(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    param_2 = CONCAT31((int3)((uint)param_2 >> 8),1);
    param_1 = FUN_0086dfd0(&PTR_FUN_0086d2e8,param_2,L"No bytes in buffer.");
    FUN_004134c0();
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x30) <= param_2)) {
    param_2 = CONCAT31((int3)((uint)param_2 >> 8),1);
    param_1 = FUN_0086dfd0(&PTR_FUN_0086d2e8,param_2,L"Index out of bounds.");
    FUN_004134c0();
  }
  return *(undefined1 *)
          (*(longlong *)(param_1 + 8) + (longlong)(*(int *)(param_1 + 0x1c) + param_2));
}

