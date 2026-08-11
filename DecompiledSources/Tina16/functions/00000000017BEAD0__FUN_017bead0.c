/* Ghidra address: 017bead0 */
/* Ghidra symbol: FUN_017bead0 */


void FUN_017bead0(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,char param_8)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  ulonglong uVar6;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40 = 0;
  local_48 = 0;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
    if (cVar1 != '\0') {
      if ((*(char *)((longlong)param_1 + 0xb) == '\0') && (*(char *)((longlong)param_1 + 9) != '\0')
         ) {
        uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      }
      else if (*(char *)((longlong)param_1 + 10) == '\0') {
        if ((char)param_1[0x12] == '\0') {
          if (((undefined **)*param_1 == &PTR_FUN_01cf10a8) && ((char)param_1[0xa8] != '\0')) {
            uVar3 = 0xa95c00;
          }
          else {
            uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,6);
          }
        }
        else {
          uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,8);
        }
      }
      else {
        if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
          uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,0x16);
        }
        else {
          uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,7);
        }
        (**(code **)(*param_2 + 0xf8))(param_2);
      }
      if (param_8 != '\0') {
        uVar3 = 0x66d7;
      }
      *(undefined1 *)((longlong)param_1 + 0x91) = 1;
      FUN_017be0e0(param_1,param_2,&local_38,param_3,param_4,param_5,param_6,param_7);
      if ((*(char *)((longlong)param_1 + 0xb) == '\0') && (*(char *)((longlong)param_1 + 9) != '\0')
         ) {
        (**(code **)(*param_2 + 0x30))(param_2,local_38,local_34,local_30,local_2c);
      }
      (**(code **)(*param_1 + 0x280))
                (param_1,&local_40,param_3,param_4,param_5,param_6,param_7,param_2[0x22]);
      uVar6 = param_2[0x22];
      (**(code **)(*param_1 + 0x290))(param_1,&local_48,param_4,param_7,uVar6);
      uVar2 = 0;
      uVar4 = 0;
      if (((undefined **)*param_1 == &PTR_FUN_01cf10a8) &&
         (uVar2 = *(undefined1 *)((longlong)param_1 + 0xd1),
         *(char *)((longlong)param_1 + 0xd3) != '\0')) {
        uVar4 = 2;
      }
      if (*(byte *)(param_1 + 0x15) < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                 (*(byte *)(param_1 + 0x15) & 0x1f) & 10U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        uVar2 = FUN_01cefe30(uVar2,1);
      }
      local_4c = (int)param_1[0x14];
      local_50 = *(int *)((longlong)param_1 + 0xa4);
      (**(code **)(*param_1 + 0x270))(param_1,&local_4c,&local_50);
      FUN_01a98770(param_2,*(int *)((longlong)param_1 + 0xc) + local_4c,(int)param_1[2] + local_50,
                   uVar4,uVar6 & 0xffffffffffffff00,uVar2,0x3ff0000000000000,0x3ff0000000000000,
                   uVar3,*(undefined4 *)((longlong)param_2 + 0xfc),300,0,
                   *(undefined1 *)((longlong)param_1 + 0xb),param_2[0x21],local_40,local_48,0);
      (**(code **)(*param_2 + 0xe0))(param_2,0);
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

