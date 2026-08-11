/* Ghidra address: 0143b2e0 */
/* Ghidra symbol: FUN_0143b2e0 */


void FUN_0143b2e0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  int local_2c;
  int local_28;
  char local_19;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_38 = 0;
  local_19 = '\x01';
  FUN_00f02610(*(undefined8 *)(param_1 + 0x700));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x180))(*(longlong **)(param_1 + 0x700));
  if (((local_19 != '\0') && (*(char *)(param_1 + 0x728) == '\0')) &&
     (param_4 < *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0))) {
    lVar3 = FUN_019a4600();
    lVar4 = FUN_019a45d0();
    if (lVar3 == lVar4) {
      if (param_3 == 0) {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_38,0,param_4);
        if (*(longlong *)(param_1 + 0x748) != 0) {
          FUN_0064dbe0(*(longlong *)(param_1 + 0x748),0);
        }
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0xb0))
                          (*(longlong **)(param_1 + 0x718),local_38);
        *param_5 = iVar1 == -1;
      }
      if (param_3 == 1) {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_48,1,param_4);
        FUN_00b8f030(local_48);
        uVar5 = FUN_00f03860(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x660),1);
        FUN_00f03530(uVar5,1);
        if (*(longlong *)(param_1 + 0x748) != 0) {
          FUN_0064dbe0(*(longlong *)(param_1 + 0x748),0);
        }
      }
      if ((param_3 == 2) && (*param_5 = 0, *(longlong *)(param_1 + 0x748) != 0)) {
        if (*(char *)(param_1 + 0xb1) == '\0') {
          FUN_00849e90(*(undefined8 *)(param_1 + 0x700),&local_2c,2,param_4);
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x700);
          iVar1 = FUN_00f02500(uVar5);
          FUN_00849e90(uVar5,&local_2c,iVar1 + -3,param_4);
        }
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),1);
        iVar1 = FUN_004230a0(&local_2c);
        FUN_0064cb30(*(undefined8 *)(param_1 + 0x748),
                     local_2c + (iVar1 - *(int *)(*(longlong *)(param_1 + 0x748) + 0x98)) / 2);
        iVar1 = FUN_004230c0(&local_2c);
        FUN_0064cb90(*(undefined8 *)(param_1 + 0x748),
                     local_28 + (iVar1 - *(int *)(*(longlong *)(param_1 + 0x748) + 0x9c)) / 2);
        uVar2 = FUN_0143d610(param_1,param_4);
        FUN_00b06920(*(undefined8 *)(param_1 + 0x748),uVar2);
      }
    }
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_38);
  return;
}

