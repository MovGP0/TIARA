/* Ghidra address: 0186fb30 */
/* Ghidra symbol: FUN_0186fb30 */


void FUN_0186fb30(longlong *param_1)

{
  char cVar1;
  
  if (((*(ushort *)(param_1[0xe] + 0x34) & 8) == 0) &&
     ((*(longlong *)(param_1[0xe] + 0x78) == 0 ||
      ((*(ushort *)(*(longlong *)(param_1[0xe] + 0x78) + 0x34) & 8) == 0)))) {
    cVar1 = FUN_006805f0(param_1[0xe]);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xc0))(param_1);
      (**(code **)(*param_1 + 0x40))(param_1,param_1[1],1,1);
      FUN_006806a0(param_1[0xe],0);
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    FUN_0064e6f0(param_1[0xe]);
  }
  return;
}

