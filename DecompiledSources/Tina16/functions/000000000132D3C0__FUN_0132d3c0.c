/* Ghidra address: 0132d3c0 */
/* Ghidra symbol: FUN_0132d3c0 */


longlong FUN_0132d3c0(longlong param_1,short *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined8 uVar5;
  
  sVar4 = *param_2;
  uVar1 = param_2[1];
  uVar2 = *(ushort *)(param_1 + 2);
  uVar3 = 0;
  do {
    uVar5 = FUN_0040c850(*(undefined8 *)
                          (*(longlong *)(param_2 + 4) + (ulonglong)((uint)uVar3 * (uint)uVar1) * 8))
    ;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)((uint)uVar3 * (uint)uVar2) * 8) = uVar5
    ;
    uVar3 = uVar3 + 1;
    sVar4 = sVar4 + -1;
  } while (sVar4 != 0);
  return param_1;
}

