/* Ghidra address: 01630560 */
/* Ghidra symbol: FUN_01630560 */


bool FUN_01630560(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong in_stack_ffffffffffffff38;
  bool local_89;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_68 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = (undefined8 *)0x0;
  local_20 = 0;
  local_28 = (undefined8 *)0x0;
  local_89 = true;
  lVar2 = *(longlong *)(param_2 + 8);
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x50) + 0x10);
  *(int *)(param_1 + 0x120) = iVar1;
  if (0 < iVar1) {
    in_stack_ffffffffffffff38 = param_1 + 200;
    uVar5 = FUN_0162fe40(param_1,param_2,param_3,1,in_stack_ffffffffffffff38);
    *(undefined8 *)(param_1 + 0xd0) = uVar5;
  }
  if (1 < *(int *)(param_1 + 0x120)) {
    in_stack_ffffffffffffff38 = param_1 + 0xc9;
    uVar5 = FUN_0162fe40(param_1,param_2,param_3,2,in_stack_ffffffffffffff38);
    *(undefined8 *)(param_1 + 0xd8) = uVar5;
  }
  if (2 < *(int *)(param_1 + 0x120)) {
    in_stack_ffffffffffffff38 = param_1 + 0xca;
    uVar5 = FUN_0162fe40(param_1,param_2,param_3,3,in_stack_ffffffffffffff38);
    *(undefined8 *)(param_1 + 0xe0) = uVar5;
  }
  if (3 < *(int *)(param_1 + 0x120)) {
    in_stack_ffffffffffffff38 = param_1 + 0xcb;
    uVar5 = FUN_0162fe40(param_1,param_2,param_3,4,in_stack_ffffffffffffff38);
    *(undefined8 *)(param_1 + 0xe8) = uVar5;
  }
  if (4 < *(int *)(param_1 + 0x120)) {
    in_stack_ffffffffffffff38 = param_1 + 0xcc;
    uVar5 = FUN_0162fe40(param_1,param_2,param_3,5,in_stack_ffffffffffffff38);
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
  }
  if (*(int *)(param_1 + 0x120) < 1) {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02001a58);
    FUN_00b8e650(uVar5,&local_20,L"HDLStrings.Msg_Too_Few_Parameters",local_28);
    FUN_01613110(local_20);
  }
  if (5 < *(int *)(param_1 + 0x120)) {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_38,PTR_PTR_02002e70);
    FUN_00b8e650(uVar5,&local_30,L"HDLStrings.Msg_Too_Many_Parameters",local_38);
    FUN_01613110(local_30);
  }
  if (*(char *)(param_1 + 200) == '\0') {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_50,PTR_PTR_02002d40);
    FUN_00b8e650(uVar5,&local_48,L"HDLStrings.Msg_Cross",local_50);
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_60,PTR_PTR_02005988);
    FUN_00b8e650(uVar5,&local_58,L"HDLStrings.Msg_Expression_Missing",local_60);
    in_stack_ffffffffffffff38 = local_58;
    FUN_00416cd0(&local_40,3,local_48,&DAT_01630dd4,local_58);
    FUN_01613110(local_40);
  }
  if (((*(char *)(param_1 + 0xca) != '\0') || (*(char *)(param_1 + 0xcb) != '\0')) &&
     (*(char *)(param_1 + 0xc9) == '\0')) {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_78,PTR_PTR_02002d40);
    FUN_00b8e650(uVar5,&local_70,L"HDLStrings.Msg_Cross",local_78);
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_88,PTR_PTR_02003540);
    FUN_00b8e650(uVar5,&local_80,L"HDLStrings.Msg_Dir_NotSpecified",local_88);
    in_stack_ffffffffffffff38 = local_80;
    FUN_00416cd0(&local_68,3,local_70,&DAT_01630dd4,local_80);
    FUN_01613110(local_68);
  }
  if (*(char *)(param_1 + 0xc9) == '\0') {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xd0);
  uVar5 = FUN_016290e0(lVar2);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_01629100(lVar2);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  uVar5 = FUN_0162fcb0(*(undefined4 *)(param_3 + 0x38),1,lVar2,1);
  *(undefined8 *)(param_1 + 0x110) = uVar5;
  *param_4 = 0;
  if (((*(char *)(lVar2 + 8) == '\0') || (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) != '\x06'))
     || ((*(byte *)(*(longlong *)(lVar2 + 0x38) + 0x88) & 0x40) != 0)) {
    *param_4 = 0;
  }
  else {
    cVar3 = FUN_0162fea0(param_1,lVar2);
    local_89 = cVar3 != '\0';
    if ((*(char *)(param_1 + 0xcc) == '\0') || (*(double *)(param_1 + 0xf0) != 0.0)) {
      if (*(double *)(param_1 + 0xd8) == 0.0) {
        if (((*(double *)(param_1 + 0x110) <= 0.0 && *(double *)(param_1 + 0x110) != 0.0) &&
            (0.0 <= *(double *)(param_1 + 0xd0))) ||
           ((0.0 < *(double *)(param_1 + 0x110) && (*(double *)(param_1 + 0xd0) <= 0.0)))) {
          *param_4 = 0x3ff0000000000000;
        }
        else {
          *param_4 = 0;
        }
      }
      else if (*(double *)(param_1 + 0xd8) == 1.0) {
        if ((0.0 < *(double *)(param_1 + 0x110) || *(double *)(param_1 + 0x110) == 0.0) ||
           (*(double *)(param_1 + 0xd0) < 0.0)) {
          *param_4 = 0;
        }
        else {
          *param_4 = 0x3ff0000000000000;
        }
      }
      else if (*(double *)(param_1 + 0xd8) == -1.0) {
        if ((*(double *)(param_1 + 0x110) <= 0.0) || (0.0 < *(double *)(param_1 + 0xd0))) {
          *param_4 = 0;
        }
        else {
          *param_4 = 0x3ff0000000000000;
        }
      }
      else {
        *param_4 = 0;
      }
    }
    else {
      *param_4 = 0;
    }
  }
  lVar4 = FUN_0162e870(param_1,*(undefined8 *)(param_3 + 0x58));
  FUN_01615b20(lVar4,*param_4);
  *(undefined4 *)(lVar4 + 0x14) = 5;
  FUN_0162fb60(*(undefined4 *)(param_3 + 0x38),*(undefined8 *)(param_1 + 0xd0),lVar2,1);
  FUN_01630110(param_1,param_2,*param_4,
               CONCAT71((int7)((ulonglong)param_1 >> 8),0.0 <= *(double *)(param_1 + 0xd0)) &
               0xffffffff,in_stack_ffffffffffffff38 & 0xffffffffffffff00);
  FUN_00414560(&local_88,0xe);
  return local_89;
}

