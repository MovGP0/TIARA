/* Ghidra address: 010e7ef0 */
/* Ghidra symbol: FUN_010e7ef0 */


void FUN_010e7ef0(longlong param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  lVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))(*(longlong **)(lVar1 + 0xd8),0);
  lVar3 = FUN_004113f0(uVar2,&DAT_01cdd500);
  if ((*(char *)(lVar3 + 0x58) == '\0') || ((byte)(*(char *)(lVar3 + 0x58) - 5U) < 2)) {
    if ((char)param_2 == '\0') {
      lVar3 = *(longlong *)(lVar1 + 0xf8);
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0xf0);
    }
    if (lVar3 != 0) {
      if (param_3 == '\0') {
        lVar4 = FUN_010e7ae0(param_1,*(undefined8 *)(lVar3 + 0x58));
      }
      else if (param_3 == '\x01') {
        lVar4 = FUN_010e7a30(param_1,*(undefined8 *)(lVar3 + 0x58));
      }
      if (lVar4 != 0) {
        FUN_010e7c20(param_1,param_2,local_3c,&local_30,&local_2c);
        local_38 = local_30;
        local_34 = local_2c;
        FUN_01ae1eb0(lVar1,param_2,lVar4,0,&local_38,0);
        FUN_010e7bd0(param_1,param_2);
      }
    }
  }
  return;
}

