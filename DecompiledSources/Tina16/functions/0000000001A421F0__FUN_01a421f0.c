/* Ghidra address: 01a421f0 */
/* Ghidra symbol: FUN_01a421f0 */


void FUN_01a421f0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(uVar3,*(undefined8 *)(param_2 + 0x78));
  *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x48) = *(undefined4 *)(param_2 + 0x48);
  iVar2 = 0;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x68 + (longlong)iVar2 * 4) =
         *(undefined4 *)(param_2 + 0x68 + (longlong)iVar2 * 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  lVar1 = *(longlong *)(param_1 + 0x2968);
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(lVar1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(lVar1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)(lVar1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  *(undefined4 *)(lVar1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  FUN_00414ad0(lVar1 + 0x80,*(undefined8 *)(param_2 + 0x80));
  FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 0x88,*(undefined8 *)(param_2 + 0x88));
  FUN_01a42430(param_1);
  if (param_3 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x2968);
    if (*(int *)(lVar1 + 0xa0) == 0) {
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_2 + 8));
      if (iVar2 == 0) {
        FUN_00416ba0(&local_28,L"%s: ",*(undefined8 *)(param_1 + 0x2bb8));
        local_38 = L"Local";
        local_30 = 0x11;
        FUN_00442f70(&local_20,local_28,&local_38,0);
        FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_20);
        goto LAB_01a423ae;
      }
    }
    FUN_00414ad0(lVar1 + 8,*(undefined8 *)(param_2 + 8));
  }
LAB_01a423ae:
  FUN_00410f20(uVar3);
  FUN_00414560(&local_28,2);
  return;
}

