/* Ghidra address: 01778280 */
/* Ghidra symbol: FUN_01778280 */


void FUN_01778280(longlong param_1,char param_2,undefined2 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x288))(*(longlong **)(param_1 + 0x10),&local_20)
    ;
    if (((*(char *)(param_1 + 200) != '\0') && (*(longlong *)(param_1 + 8) != 0)) &&
       (*(longlong *)(param_1 + 0xd8) != 0)) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0xd8));
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    lVar2 = FUN_0198b200(0,&PTR_FUN_01768498,0,0);
    *(longlong *)(param_1 + 8) = lVar2;
    *(undefined1 *)(lVar2 + 0x490) = 1;
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar1 + 0x560) == '\0') {
      uVar3 = FUN_01771420(param_1,1);
      FUN_01646860(lVar2,*(undefined8 *)(param_1 + 0x18),lVar1,uVar3,*(undefined8 *)(param_1 + 0x58)
                   ,*(undefined4 *)(param_1 + 100),*(undefined1 *)(param_1 + 0xe0),param_2,
                   *(undefined8 *)(param_1 + 0xd0),param_1 + 0xc9,param_1 + 0xca);
    }
    FUN_0176a3c0(param_1,*(undefined8 *)(param_1 + 0x10),param_3);
    *(undefined1 *)(param_1 + 200) = 1;
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  FUN_00414480(&local_20);
  return;
}

