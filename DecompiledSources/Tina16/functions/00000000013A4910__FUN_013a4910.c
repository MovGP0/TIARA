/* Ghidra address: 013a4910 */
/* Ghidra symbol: FUN_013a4910 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013a4910(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined *local_48;
  undefined1 local_40;
  longlong local_38 [3];
  
  local_38[1] = 0;
  local_38[0] = 0;
  local_48 = PTR_DAT_02004010 + 0x7e0;
  local_40 = 3;
  FUN_00442f70(local_38,L"%10.4e",&local_48,0);
  iVar3 = 0;
  if (local_38[0] != 0) {
    iVar3 = *(int *)(local_38[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (*(short *)(local_38[0] + -2 + (longlong)iVar2 * 2) == 0x2c) {
        lVar1 = FUN_00414de0(local_38);
        *(undefined2 *)(lVar1 + -2 + (longlong)iVar2 * 2) = 0x2e;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00416cd0(local_38 + 1,3,L"[SetSimulationUnit(",local_38[0],&LAB_013a4a78);
  FUN_013a40d0(param_1,local_38 + 1);
  FUN_00414560(local_38,2);
  return;
}

