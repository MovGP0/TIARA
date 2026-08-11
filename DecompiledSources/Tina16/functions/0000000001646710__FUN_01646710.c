/* Ghidra address: 01646710 */
/* Ghidra symbol: FUN_01646710 */


ulonglong FUN_01646710(undefined8 param_1,undefined4 param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_30 [2];
  
  lVar1 = FUN_01645fb0(*(undefined8 *)(param_3 + 0x100),param_1,local_30);
  if ((*(longlong *)(lVar1 + 0x38) == 0) || (*(int *)(*(longlong *)(lVar1 + 0x38) + 0x10) == 0)) {
    FUN_01613110(L"GetCurrentProc: p.FVABoxCode is missing");
  }
  lVar1 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x38),param_2);
  uVar2 = FUN_0162f210(lVar1,local_30[0]);
  if (*(char *)(lVar1 + 0x4b) != '\0') {
    uVar2 = uVar2 ^ 0x8000000000000000;
  }
  *param_4 = 1;
  return uVar2;
}

