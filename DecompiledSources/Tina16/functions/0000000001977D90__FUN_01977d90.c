/* Ghidra address: 01977d90 */
/* Ghidra symbol: FUN_01977d90 */


undefined1 FUN_01977d90(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  longlong *local_50;
  longlong *local_48;
  int local_3c;
  longlong local_38;
  undefined1 local_29;
  
  local_60 = auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lVar2 = (**(code **)(*param_1 + 0x118))(param_1);
  (**(code **)(**(longlong **)(lVar2 + 0x1b0) + 0x90))(*(longlong **)(lVar2 + 0x1b0));
  (**(code **)(**(longlong **)(param_1[0x34] + 0x20) + 0x10))(*(longlong **)(param_1[0x34] + 0x20));
  *(undefined1 *)(param_1 + 0x58) = 1;
  local_38 = FUN_01951400(param_1);
  iVar5 = *(int *)(local_38 + 0x10);
  local_3c = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_48 = (longlong *)FUN_004aeac0(local_38,local_3c);
      uVar3 = FUN_004aeac0(local_38,local_3c);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01929d50);
      if (cVar1 != '\0') {
        lVar2 = FUN_004aeac0(local_38,local_3c);
        *(undefined1 *)(lVar2 + 0x2d0) = 1;
      }
      (**(code **)(*local_48 + 0x1b0))(local_48);
      if ((*(char *)((longlong)param_1 + 0x2b1) == '\0') &&
         (cVar1 = FUN_01953b80(local_48), cVar1 == '\0')) {
        local_50 = (longlong *)FUN_0184cde0(param_1[0x49],local_48[2]);
        if (local_50 == (longlong *)0x0) {
          lVar2 = param_1[0x49];
          pcVar4 = (code *)FUN_00411550(lVar2,0xffe7);
          (*pcVar4)(lVar2,local_48[2],local_48);
        }
        else {
          FUN_00468700(&local_78,local_48);
          (**(code **)(*local_50 + 8))(local_50,&local_78);
        }
      }
      local_3c = local_3c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(char *)((longlong)param_1 + 0x2b1) == '\0') {
    FUN_01976b70(param_1);
  }
  local_29 = (**(code **)(*(longlong *)param_1[0x34] + 0xb8))((longlong *)param_1[0x34],0,0,param_2)
  ;
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_0196f460(param_1);
  FUN_00460ba0(&local_78);
  return local_29;
}

