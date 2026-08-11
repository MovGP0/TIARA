/* Ghidra address: 00ce1840 */
/* Ghidra symbol: FUN_00ce1840 */


void FUN_00ce1840(longlong param_1)

{
  int iVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))();
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Connection",*(undefined8 *)(param_1 + 0x28));
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Content-Version",*(undefined8 *)(param_1 + 0x78))
    ;
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Content-Disposition",
                 *(undefined8 *)(param_1 + 0x30));
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Content-Encoding",*(undefined8 *)(param_1 + 0x38)
                );
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Content-Language",*(undefined8 *)(param_1 + 0x40)
                );
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Content-Type",*(undefined8 *)(param_1 + 0x70));
    FUN_00cd9a00(*(undefined8 *)(param_1 + 0x18),L"Content-Type",L"charset",
                 *(undefined8 *)(param_1 + 0x20));
  }
  if (-1 < *(longlong *)(param_1 + 0x48)) {
    FUN_0043f780(local_20,*(longlong *)(param_1 + 0x48));
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Content-Length",local_20[0]);
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Cache-control",*(undefined8 *)(param_1 + 0x10));
  }
  if (0.0 < *(double *)(param_1 + 0x88)) {
    FUN_00877920(&local_28,*(undefined8 *)(param_1 + 0x88));
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Date",local_28);
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x98) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"ETag",*(undefined8 *)(param_1 + 0x98));
  }
  if (0.0 < *(double *)(param_1 + 0x90)) {
    FUN_00877920(&local_30,*(undefined8 *)(param_1 + 0x90));
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Expires",local_30);
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Pragma",*(undefined8 *)(param_1 + 0xa8));
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xb8) + -4);
  }
  if (0 < iVar1) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Transfer-Encoding",
                 *(undefined8 *)(param_1 + 0xb8));
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_38);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))(*(longlong **)(param_1 + 0x80),&local_40);
    FUN_00416ad0(&local_38,local_40);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))(*(longlong **)(param_1 + 0x18),local_38);
  }
  FUN_00414560(&local_40,5);
  return;
}

