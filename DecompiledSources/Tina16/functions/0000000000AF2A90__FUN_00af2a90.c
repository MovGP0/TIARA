/* Ghidra address: 00af2a90 */
/* Ghidra symbol: FUN_00af2a90 */


void FUN_00af2a90(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  char local_29;
  undefined8 local_28;
  longlong local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_29 = '\0';
  FUN_00afeec0(param_1,param_1[0x128],&local_29);
  if (local_29 == '\0') {
    pcVar6 = (code *)FUN_00411550(param_1,0xffac);
    cVar1 = (*pcVar6)(param_1);
    if (cVar1 == '\0') {
      uVar3 = FUN_00af5fb0(param_1);
      uVar7 = FUN_00414480(&local_20);
      uVar8 = FUN_00414480(&local_28);
      FUN_00a289e0(param_1[0x128],uVar7,uVar8);
      if (local_20 == 0) {
        cVar1 = FUN_00af50d0(param_1,local_28);
        if (cVar1 != '\0') {
          FUN_00af6730(param_1,param_1[0x117],param_1[0x11c],uVar3,0,(char)param_1[0x118]);
        }
      }
      else {
        (**(code **)(*param_1 + 0x448))(param_1,local_40,local_20,0);
        FUN_00414b50(&local_20,local_40[0]);
        uVar4 = FUN_00aef6d0(local_20);
        bVar2 = (char)uVar4 - 1;
        if (bVar2 != 0xff) {
          if (bVar2 < 2) {
            FUN_00416ba0(&local_58,local_20,local_28);
            FUN_00af0c00(param_1,local_58,uVar4);
            goto LAB_00af2cb1;
          }
          if ((char)uVar4 != '\x03') goto LAB_00af2cb1;
        }
        iVar5 = FUN_00416db0(local_20,param_1[0x117]);
        if (iVar5 == 0) {
          cVar1 = FUN_00af50d0(param_1,local_28);
          if (cVar1 != '\0') {
            FUN_00af6730(param_1,param_1[0x117],param_1[0x11c],uVar3,0,0);
          }
        }
        else {
          FUN_00416ba0(&local_48,local_20,local_28);
          FUN_00af0c00(param_1,local_48,uVar4);
          FUN_00416ba0(&local_50,local_20,local_28);
          FUN_00af2d10(param_1,local_50);
        }
      }
    }
  }
LAB_00af2cb1:
  FUN_00414560(&local_58,4);
  FUN_00414560(&local_28,2);
  return;
}

