/* Ghidra address: 01d00440 */
/* Ghidra symbol: FUN_01d00440 */


void FUN_01d00440(longlong param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  
  *(undefined1 *)(param_1 + 0x2b3) = 0;
  pcVar1 = (char *)(*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x168) + (longlong)param_2 * 99);
  cVar2 = FUN_01d3d510(*pcVar1);
  if (cVar2 == '\0') {
    if (*pcVar1 == '\x1f') {
      *(undefined1 *)(param_1 + 0x2b3) = 1;
    }
  }
  else if ((*pcVar1 != '\f') && (*pcVar1 != '\x0e')) {
    uVar3 = FUN_01d00250(param_1,*(undefined2 *)(param_1 + 0x2ac));
    *(uint *)(param_1 + 0x2b4) = (uint)uVar3;
    if ((byte)pcVar1[1] < 5) {
      *(uint *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + (uint)(byte)pcVar1[1] + -2;
      *(uint *)(param_1 + 0x2ac) =
           (uint)*(ushort *)(PTR_DAT_02002778 + (longlong)*(int *)(param_1 + 0x2b4) * 2);
    }
    else {
      *(undefined1 *)(param_1 + 0x2b3) = 1;
      *(uint *)(param_1 + 0x2ac) =
           (uint)*(ushort *)(PTR_DAT_02002778 + (longlong)*(int *)(param_1 + 0x2b4) * 2);
    }
  }
  return;
}

