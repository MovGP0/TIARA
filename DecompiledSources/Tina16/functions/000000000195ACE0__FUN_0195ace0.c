/* Ghidra address: 0195ace0 */
/* Ghidra symbol: FUN_0195ace0 */


void FUN_0195ace0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_01953ba0(param_1);
  if (cVar2 != '\0') {
    uVar3 = FUN_01950600(param_1);
    cVar2 = FUN_004113d0(uVar3,&PTR_FUN_01936f68);
    if ((cVar2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) != '\x0f')) {
      lVar1 = *(longlong *)(param_1 + 0x288);
      FUN_005fd670(*(undefined8 *)(lVar1 + 0x78),0);
      FUN_005fd4e0(*(undefined8 *)(lVar1 + 0x78),0);
      FUN_005fd6d0(*(undefined8 *)(lVar1 + 0x78),1);
      FUN_0195aad0(param_1,*(undefined4 *)(param_1 + 0x248),*(int *)(param_1 + 0x24c) + 3,
                   *(undefined4 *)(param_1 + 0x248),*(int *)(param_1 + 0x24c),1);
      FUN_0195aad0(param_1,*(int *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c),
                   *(int *)(param_1 + 0x248) + 4,*(undefined4 *)(param_1 + 0x24c),1);
      FUN_0195aad0(param_1,*(undefined4 *)(param_1 + 0x248),*(int *)(param_1 + 0x254) + -3,
                   *(undefined4 *)(param_1 + 0x248),*(int *)(param_1 + 0x254),1);
      FUN_0195aad0(param_1,*(int *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x254),
                   *(int *)(param_1 + 0x248) + 4,*(undefined4 *)(param_1 + 0x254),1);
      FUN_0195aad0(param_1,*(int *)(param_1 + 0x250) + -3,*(undefined4 *)(param_1 + 0x24c),
                   *(int *)(param_1 + 0x250),*(undefined4 *)(param_1 + 0x24c),1);
      FUN_0195aad0(param_1,*(undefined4 *)(param_1 + 0x250),*(int *)(param_1 + 0x24c),
                   *(undefined4 *)(param_1 + 0x250),*(int *)(param_1 + 0x24c) + 4,1);
      FUN_0195aad0(param_1,*(int *)(param_1 + 0x250) + -3,*(undefined4 *)(param_1 + 0x254),
                   *(int *)(param_1 + 0x250),*(undefined4 *)(param_1 + 0x254),1);
      FUN_0195aad0(param_1,*(undefined4 *)(param_1 + 0x250),*(int *)(param_1 + 0x254),
                   *(undefined4 *)(param_1 + 0x250),*(int *)(param_1 + 0x254) + -4,1);
    }
  }
  return;
}

