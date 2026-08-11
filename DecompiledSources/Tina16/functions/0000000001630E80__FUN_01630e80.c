/* Ghidra address: 01630e80 */
/* Ghidra symbol: FUN_01630e80 */


bool FUN_01630e80(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool local_61;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_48 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = (undefined8 *)0x0;
  local_20 = 0;
  local_28 = (undefined8 *)0x0;
  local_61 = true;
  lVar1 = *(longlong *)(param_2 + 8);
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(*(longlong *)(param_3 + 0x50) + 0x10);
  *(undefined8 *)(param_1 + 0xe0) = 0x3e112e0be826d695;
  *(undefined8 *)(param_1 + 0xd8) = 0x3ff0000000000000;
  if (0 < *(int *)(param_1 + 0x120)) {
    uVar4 = FUN_0162fe40(param_1,param_2,param_3,1,param_1 + 200);
    *(undefined8 *)(param_1 + 0xd0) = uVar4;
  }
  if (1 < *(int *)(param_1 + 0x120)) {
    uVar4 = FUN_0162fe40(param_1,param_2,param_3,2,param_1 + 0xca);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
  }
  if (2 < *(int *)(param_1 + 0x120)) {
    uVar4 = FUN_0162fe40(param_1,param_2,param_3,3,param_1 + 0xcb);
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
  }
  if (3 < *(int *)(param_1 + 0x120)) {
    uVar4 = FUN_0162fe40(param_1,param_2,param_3,4,param_1 + 0xcc);
    *(undefined8 *)(param_1 + 0xf0) = uVar4;
  }
  if (*(int *)(param_1 + 0x120) < 1) {
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02001a58);
    FUN_00b8e650(uVar4,&local_20,L"HDLStrings.Msg_Too_Few_Parameters",local_28);
    FUN_01613110(local_20);
  }
  if (4 < *(int *)(param_1 + 0x120)) {
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_38,PTR_PTR_02002e70);
    FUN_00b8e650(uVar4,&local_30,L"HDLStrings.Msg_Too_Many_Parameters",local_38);
    FUN_01613110(local_30);
  }
  if (*(char *)(param_1 + 200) == '\0') {
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_50,PTR_PTR_020046c0);
    FUN_00b8e650(uVar4,&local_48,L"HDLStrings.Msg_Above",local_50);
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_60,PTR_PTR_02005988);
    FUN_00b8e650(uVar4,&local_58,L"HDLStrings.Msg_Expression_Missing",local_60);
    FUN_00416cd0(&local_40,3,local_48,&DAT_016314e4,local_58);
    FUN_01613110(local_40);
  }
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xd0);
  uVar4 = FUN_016290e0(lVar1);
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  uVar4 = FUN_01629100(lVar1);
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  uVar4 = FUN_0162fcb0(*(undefined4 *)(param_3 + 0x38),1,lVar1,1);
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  *param_4 = 0;
  if ((*(char *)(lVar1 + 8) != '\0') && (*(char *)(*(longlong *)(lVar1 + 0x38) + 0x89) != '\b')) {
    cVar2 = FUN_0162fea0(param_1,lVar1);
    local_61 = cVar2 != '\0';
    if ((*(char *)(param_1 + 0xcc) == '\0') || (*(double *)(param_1 + 0xf0) != 0.0)) {
      if ((((*(byte *)(*(longlong *)(lVar1 + 0x38) + 0x88) & 2) == 0) &&
          ((*(byte *)(*(longlong *)(lVar1 + 0x38) + 0x88) & 0x40) == 0)) &&
         ((*(byte *)(*(longlong *)(lVar1 + 0x38) + 0x88) & 0x20) == 0)) {
        if ((0.0 < *(double *)(param_1 + 0x110) || *(double *)(param_1 + 0x110) == 0.0) ||
           (*(double *)(param_1 + 0xd0) <= 0.0)) {
          *param_4 = 0;
        }
        else {
          *param_4 = 0x3ff0000000000000;
        }
      }
      else if (*(double *)(param_1 + 0xd0) <= 0.0) {
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
  lVar3 = FUN_0162e870(param_1,*(undefined8 *)(param_3 + 0x58));
  FUN_01615b20(lVar3,*param_4);
  *(undefined4 *)(lVar3 + 0x14) = 5;
  if ((*(char *)(lVar1 + 8) != '\0') && (*(char *)(*(longlong *)(lVar1 + 0x38) + 0x89) != '\b')) {
    FUN_0162fb60(*(undefined4 *)(param_3 + 0x38),*(undefined8 *)(param_1 + 0xd0),lVar1,1);
    FUN_01630110(param_1,param_2,*param_4,
                 CONCAT71((int7)((ulonglong)param_1 >> 8),0.0 <= *(double *)(param_1 + 0xd0)) &
                 0xffffffff,1);
  }
  FUN_00414560(&local_60,9);
  return local_61;
}

