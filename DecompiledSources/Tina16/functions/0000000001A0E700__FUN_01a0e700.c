/* Ghidra address: 01a0e700 */
/* Ghidra symbol: FUN_01a0e700 */


void FUN_01a0e700(longlong param_1,undefined8 param_2,char param_3,byte param_4,longlong param_5,
                 undefined8 param_6)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong in_stack_fffffffffffffe60;
  undefined *puVar8;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [264];
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00414610(param_6);
  plVar6 = (longlong *)FUN_0199ab60(param_2);
  while (plVar6 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar6 + 0x210))(plVar6,0);
    uVar4 = (**(code **)(*plVar6 + 0x210))(plVar6,1);
    FUN_0040e840(local_138,uVar3);
    FUN_004169a0(&local_20,local_138);
    FUN_0040e840(local_138,uVar4);
    FUN_004169a0(&local_28,local_138);
    if (param_3 == '\0') {
      puVar8 = &DAT_01a0ee24;
      FUN_00416cd0(&local_148,7,&DAT_01a0ee10,param_6,local_20,&DAT_01a0ee24,param_6,local_28,
                   &DAT_01a0ee00);
      in_stack_fffffffffffffe60 = (ulonglong)puVar8 & 0xffffffffffffff00;
      FUN_019f06f0(param_1,3,0x14,local_148,param_6,in_stack_fffffffffffffe60,param_4);
    }
    else {
      puVar8 = &DAT_01a0ee00;
      FUN_00416cd0(&local_140,4,&DAT_01a0edec,param_6,local_28,&DAT_01a0ee00);
      in_stack_fffffffffffffe60 = CONCAT71((int7)((ulonglong)puVar8 >> 8),param_3);
      FUN_019f06f0(param_1,3,0x14,local_140,param_6,in_stack_fffffffffffffe60,param_4);
    }
    plVar6 = (longlong *)FUN_0199ab80(param_2);
  }
  FUN_01995600(param_2,0,0);
  uVar7 = FUN_01995660(param_2,1,0);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  do {
    if ((*(char *)(param_1 + 0xc2) != '\0') || (*(longlong *)(param_1 + 0x58) == 0)) {
      FUN_00414560(&local_158,4);
      FUN_00414560(&local_30,3);
      FUN_00414480(&param_6);
      return;
    }
    FUN_017ff5f0(*(undefined8 *)(param_1 + 0x58),param_5);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
    if (uVar2 < 0x11) {
      if (uVar2 == 0x10) {
        if ((((param_5 == 0) && ((param_4 & 1) != 0)) && (*(char *)(param_1 + 0x36f) != '\0')) &&
           (cVar1 = FUN_017d0b70(*(undefined8 *)(param_1 + 0x58)), cVar1 != '\0')) {
          in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
          FUN_019f06f0(param_1,0,0x14,&DAT_01a0ee44,param_6,in_stack_fffffffffffffe60,param_4);
        }
      }
      else if (uVar2 == 4) {
        iVar5 = FUN_019edff0(param_1,1,1);
        if (iVar5 == 1) {
          iVar5 = FUN_019edff0(param_1,2,1);
          if (iVar5 == 0) {
            in_stack_fffffffffffffe60 = CONCAT71((int7)(in_stack_fffffffffffffe60 >> 8),param_3);
            FUN_019f06f0(param_1,1,0x14,&DAT_01a0ee44,param_6,in_stack_fffffffffffffe60,param_4);
          }
        }
      }
      else {
        if (uVar2 == 5) goto LAB_01a0ea64;
        if (uVar2 == 6) goto LAB_01a0e9ee;
        if (((uVar2 == 0xf) && (param_5 == 0)) &&
           (((param_4 & 1) != 0 &&
            ((*(char *)(param_1 + 0x36f) != '\0' &&
             (cVar1 = FUN_017d0b70(*(undefined8 *)(param_1 + 0x58)), cVar1 != '\0')))))) {
          in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
          FUN_019f06f0(param_1,0,8,&DAT_01a0ee34,param_6,in_stack_fffffffffffffe60,param_4);
        }
      }
    }
    else if (uVar2 == 0x21) {
LAB_01a0ea64:
      iVar5 = FUN_019edff0(param_1,1,1);
      if (iVar5 == 1) {
        iVar5 = FUN_019edff0(param_1,2,1);
        if (iVar5 == 0) {
          in_stack_fffffffffffffe60 = CONCAT71((int7)(in_stack_fffffffffffffe60 >> 8),param_3);
          FUN_019f06f0(param_1,2,0x14,&DAT_01a0ee44,param_6,in_stack_fffffffffffffe60,param_4);
        }
      }
    }
    else if (uVar2 == 0x22) {
LAB_01a0e9ee:
      iVar5 = FUN_019edff0(param_1,1,1);
      if (iVar5 == 1) {
        iVar5 = FUN_019edff0(param_1,2,1);
        if (iVar5 == 0) {
          in_stack_fffffffffffffe60 = CONCAT71((int7)(in_stack_fffffffffffffe60 >> 8),param_3);
          FUN_019f06f0(param_1,0,0x14,&DAT_01a0ee34,param_6,in_stack_fffffffffffffe60,param_4);
        }
      }
    }
    else if (uVar2 == 0x39) {
      plVar6 = *(longlong **)(param_1 + 0x58);
      if (((char)plVar6[0x34] == '\x01') && (*(longlong *)(plVar6[0x35] + 8) != 0)) {
        if (*(char *)(param_1 + 0xc0) == '\x02') {
          (**(code **)(*plVar6 + 0x288))(plVar6,&local_150);
          FUN_00416cd0(&local_30,3,param_6,local_150,&DAT_01a0ee54);
        }
        else {
          (**(code **)(*plVar6 + 0x288))(plVar6,&local_158);
          FUN_00416cd0(&local_30,4,param_6,&DAT_01a0ee64,local_158,&LAB_01a0ee74);
        }
        in_stack_fffffffffffffe60 = local_30;
        FUN_01a0e700(param_1,*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1a8) + 8),param_3,
                     param_4,*(longlong *)(param_1 + 0x58),local_30);
      }
    }
    else if (uVar2 == 0x77) goto LAB_01a0ea64;
    FUN_01995800(param_2,1,0);
    uVar7 = FUN_01995660(param_2,1);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
  } while( true );
}

