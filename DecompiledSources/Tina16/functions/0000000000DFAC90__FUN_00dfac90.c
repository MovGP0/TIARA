/* Ghidra address: 00dfac90 */
/* Ghidra symbol: FUN_00dfac90 */


void FUN_00dfac90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x510;
  FUN_01b053c0(lVar1,param_1 + 0x518,param_1 + 0x520);
  if (*(char *)(param_1 + 0x50c) != '\0') {
    *(undefined4 *)(param_1 + 0x520) = 0;
    iVar2 = *(int *)(param_1 + 0x500);
    if (-1 < iVar2) {
      FUN_017ddc70(*(undefined8 *)(param_1 + 0xd8),iVar2,*(undefined4 *)(param_1 + 0x504),
                   *(undefined4 *)(param_1 + 0x508),lVar1,param_1 + 0x518,param_1 + 0x520);
      FUN_017ddb80(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x508),
                   *(undefined4 *)(param_1 + 0x308),lVar1,param_1 + 0x518,param_1 + 0x520);
      FUN_017dd810(*(undefined8 *)(param_1 + 0xd8),*(int *)(param_1 + 0x500),0,lVar1,param_1 + 0x518
                   ,param_1 + 0x520);
    }
    if (0 < *(int *)(param_1 + 0x504)) {
      FUN_017ddc70(*(undefined8 *)(param_1 + 0xd8),*(int *)(param_1 + 0x504),0,
                   *(int *)(param_1 + 0x508) + 1,lVar1,param_1 + 0x518,param_1 + 0x520);
      FUN_017ddb80(*(undefined8 *)(param_1 + 0xd8),*(int *)(param_1 + 0x508) + 1,
                   *(undefined4 *)(param_1 + 0x308),lVar1,param_1 + 0x518,param_1 + 0x520);
      FUN_017dd810(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x504),0,lVar1,
                   param_1 + 0x518,param_1 + 0x520);
    }
  }
  return;
}

