/* Ghidra address: 00bb1f70 */
/* Ghidra symbol: FUN_00bb1f70 */


void FUN_00bb1f70(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  short local_1a;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
LAB_00bb2166:
  do {
    cVar1 = (**(code **)(*param_3 + 0x60))(param_3,&local_1a);
    if (cVar1 == '\0') {
LAB_00bb2184:
      FUN_00417840(&local_68,&DAT_00b9f8e0,2);
      FUN_00414560(&local_58,6);
      return;
    }
    if (local_1a != 0x26) {
      if (local_1a == 0x3c) {
        (**(code **)(*param_3 + 0x58))(param_3);
        iVar2 = (**(code **)(*param_3 + 0x80))(param_3);
        if (iVar2 < 1) {
          if (param_1 == (longlong *)0x0) {
            param_1 = (longlong *)0x0;
          }
          else {
            param_1 = param_1 + 10;
          }
          FUN_00baf490(param_2,&local_68,param_1);
        }
        else {
          cVar1 = FUN_00bb32b0(param_1[3]);
          if (cVar1 == '\0') {
            (**(code **)(*param_1 + 8))(param_1,&local_38);
            (**(code **)(*param_3 + 0x78))(param_3,&local_40);
            FUN_00416ad0(&local_38,local_40);
            FUN_00bad1a0(local_30,local_38);
            (**(code **)(*param_1 + 0x18))(param_1,local_30[0]);
          }
          else {
            (**(code **)(*param_1 + 8))(param_1,&local_48);
            (**(code **)(*param_3 + 0x78))(param_3,&local_50);
            FUN_00416ad0(&local_48,local_50);
            (**(code **)(*param_1 + 0x18))(param_1,local_48);
          }
          (**(code **)(*param_1 + 8))(param_1,&local_58);
          if (local_58 == 0) {
            if (param_1 == (longlong *)0x0) {
              param_1 = (longlong *)0x0;
            }
            else {
              param_1 = param_1 + 10;
            }
            FUN_00baf490(param_2,&local_60,param_1);
          }
        }
        goto LAB_00bb2184;
      }
      (**(code **)(*param_3 + 0x70))(param_3,local_1a);
      goto LAB_00bb2166;
    }
    uVar3 = FUN_00baca30(param_3);
    (**(code **)(*param_3 + 0x70))(param_3,uVar3);
  } while( true );
}

