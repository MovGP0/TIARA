/* Ghidra address: 0132cd20 */
/* Ghidra symbol: FUN_0132cd20 */


void FUN_0132cd20(short *param_1)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  
  lVar2 = *(longlong *)(param_1 + 4);
  sVar4 = *param_1;
  uVar1 = param_1[1];
  uVar3 = 0;
  do {
    *(undefined8 *)(lVar2 + (ulonglong)((uint)uVar3 * (uint)uVar1) * 8) = DAT_01f35058;
    uVar3 = uVar3 + 1;
    sVar4 = sVar4 + -1;
  } while (sVar4 != 0);
  return;
}

