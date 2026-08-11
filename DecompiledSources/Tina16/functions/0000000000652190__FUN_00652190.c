/* Ghidra address: 00652190 */
/* Ghidra symbol: FUN_00652190 */


void FUN_00652190(longlong *param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int iStack_5c;
  short *local_58;
  undefined1 local_4c [19];
  char local_39;
  ulonglong local_38;
  undefined8 local_30;
  
  if (*(longlong *)(param_2 + 0x18) == 0) {
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
      local_58 = (short *)(param_2 + 0x10);
      local_60 = (int)*local_58;
      iStack_5c = (int)*(short *)(param_2 + 0x12);
      local_30 = CONCAT44(iStack_5c,local_60);
      cVar1 = FUN_004983a0(&local_30);
      if (cVar1 == '\0') {
        local_38 = FUN_0064d3a0(param_1,&local_30);
        (**(code **)(*param_1 + 0xe0))(param_1,local_4c);
        cVar1 = FUN_00423210(local_4c,&local_38);
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + -0x38))(param_1,param_2);
          return;
        }
      }
      else {
        local_38 = local_30;
      }
      local_39 = '\0';
      pcVar2 = (code *)FUN_00411550(param_1,0xffe6);
      (*pcVar2)(param_1,&local_38,&local_39);
      *(longlong *)(param_2 + 0x18) = (longlong)local_39;
      if (local_39 == '\0') {
        pcVar2 = (code *)FUN_00411550(param_1,0xffd6);
        plVar3 = (longlong *)(*pcVar2)(param_1);
        if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0xd1) != '\0')) {
          FUN_0064d3e0(param_1,param_1);
          plVar3[0x1b] = (longlong)param_1;
          cVar1 = FUN_004983a0(&local_30);
          if (cVar1 != '\0') {
            local_68 = 0;
            local_64 = 0;
            local_30 = FUN_0064d1f0(param_1,&local_68);
          }
          (**(code **)(*plVar3 + 0xa8))(plVar3,local_30 & 0xffffffff,local_30._4_4_);
          *(undefined8 *)(param_2 + 0x18) = 1;
        }
        if (*(longlong *)(param_2 + 0x18) == 0) {
          (**(code **)(*param_1 + -0x38))(param_1,param_2);
        }
      }
    }
    else {
      (**(code **)(*param_1 + -0x38))(param_1,param_2);
    }
  }
  return;
}

