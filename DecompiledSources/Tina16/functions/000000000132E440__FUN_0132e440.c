/* Ghidra address: 0132e440 */
/* Ghidra symbol: FUN_0132e440 */


void FUN_0132e440(short *param_1)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  
  lVar3 = *(longlong *)(param_1 + 4);
  sVar7 = *param_1;
  sVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = 0;
  do {
    uVar5 = 0;
    sVar6 = sVar1;
    do {
      if (uVar4 == uVar5) {
        *(undefined8 *)(lVar3 + (ulonglong)((uint)uVar4 * (uint)uVar2 + (uint)uVar5) * 8) =
             *(undefined8 *)PTR_DAT_02001658;
      }
      else {
        *(undefined8 *)(lVar3 + (ulonglong)((uint)uVar4 * (uint)uVar2 + (uint)uVar5) * 8) =
             *(undefined8 *)PTR_DAT_02004b50;
      }
      uVar5 = uVar5 + 1;
      sVar6 = sVar6 + -1;
    } while (sVar6 != 0);
    uVar4 = uVar4 + 1;
    sVar7 = sVar7 + -1;
  } while (sVar7 != 0);
  return;
}

