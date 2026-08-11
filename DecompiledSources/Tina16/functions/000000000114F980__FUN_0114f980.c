/* Ghidra address: 0114f980 */
/* Ghidra symbol: FUN_0114f980 */


void FUN_0114f980(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort uVar3;
  
  FUN_0114f780(param_1,*(undefined8 *)(param_1 + 0x58),1,*param_2);
  uVar2 = 1;
  do {
    uVar1 = (ushort)uVar2;
    if (*param_2 < uVar1) {
      return;
    }
    uVar3 = uVar1;
    do {
      uVar3 = uVar3 + 1;
      if (*param_2 < uVar3) break;
    } while (*(short *)(*(longlong *)(param_1 + 0x58) + -2 + (ulonglong)uVar3 * 2) ==
             *(short *)(*(longlong *)(param_1 + 0x58) + -2 + uVar2 * 2));
    if ((uVar3 <= *param_2) && (1 < (int)((uint)uVar3 - (int)uVar2))) {
      FUN_00409a70(*(longlong *)(param_1 + 0x58) + -2 + (ulonglong)uVar3 * 2,
                   *(longlong *)(param_1 + 0x58) + -2 + (ulonglong)((int)uVar2 + 1) * 2,
                   (longlong)(int)((((uint)*param_2 - (uint)uVar3) + 1) * 2));
    }
    *param_2 = (*param_2 - (uVar3 - uVar1)) + 1;
    uVar2 = (ulonglong)(ushort)(uVar1 + 1);
  } while( true );
}

