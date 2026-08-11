/* Ghidra address: 01a52510 */
/* Ghidra symbol: FUN_01a52510 */


void FUN_01a52510(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_40 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x30) + 0x18);
  local_38 = 0x11;
  FUN_00442f70(local_30,L"llamafile is not installed please download it and save it to %s",&local_40
               ,0);
  FUN_00414ad0(param_1 + 0x880,local_30[0]);
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x30) + 8);
  FUN_00414ad0(param_1 + 0x888,L"%s -m %s ");
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x30) + 0x20 + (longlong)iVar2 * 8);
      if (*(longlong *)(lVar1 + 0x10) == 0) {
        local_40 = *(undefined8 *)(lVar1 + 8);
        local_38 = 0x11;
        FUN_00442f70(&local_20,L"--%s ",&local_40,0);
      }
      else {
        local_60 = *(undefined8 *)(lVar1 + 8);
        local_58 = 0x11;
        local_50 = *(undefined8 *)(lVar1 + 0x10);
        local_48 = 0x11;
        FUN_00442f70(&local_20,L"--%s %s ",&local_60,1);
      }
      FUN_00416ad0(param_1 + 0x888,local_20);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar1 = *(longlong *)(param_1 + 0x2968);
  *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(*(longlong *)(param_1 + 0x7e8) + 0xc);
  *(undefined4 *)(lVar1 + 0x6c) = *(undefined4 *)(*(longlong *)(param_1 + 0x7e8) + 0x10);
  *(undefined4 *)(lVar1 + 0x70) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x30) + 0xc);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

