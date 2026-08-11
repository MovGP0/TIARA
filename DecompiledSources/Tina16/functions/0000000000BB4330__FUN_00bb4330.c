/* Ghidra address: 00bb4330 */
/* Ghidra symbol: FUN_00bb4330 */


void FUN_00bb4330(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *in_stack_ffffffffffffff08;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  short local_22;
  undefined8 local_20;
  
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = (longlong *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20 = 0;
  local_30 = 0;
  cVar5 = '\0';
LAB_00bb493c:
  do {
    cVar1 = (**(code **)(*param_3 + 0x60))(param_3,&local_22);
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar4 = FUN_00bad230(&PTR_FUN_00b9ee48,1,0,0x2e,&local_50,0xffffffff);
        FUN_004134c0(uVar4);
      }
LAB_00bb4998:
      FUN_0041b800(&local_c8);
      FUN_00414480(&local_c0);
      FUN_00417840(&local_a8,&DAT_00b9f8e0,2);
      FUN_00414480(&local_98);
      FUN_0041b800(&local_70);
      FUN_0041b800(&local_68);
      FUN_00414560(&local_60,2);
      FUN_00417840(&local_50,&DAT_00b9f8e0,3);
      FUN_00414480(&local_30);
      FUN_00414480(&local_20);
      return;
    }
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        cVar1 = FUN_00bac6b0(local_22);
        if (cVar1 == '\0') {
          if (local_22 == 0x21) {
            cVar5 = '\x03';
          }
          else if (local_22 == 0x2f) {
            cVar5 = '\x02';
          }
          else if (local_22 == 0x3f) {
            plVar3 = (longlong *)FUN_00bb35d0(param_1,0,0);
            if (plVar3 == (longlong *)0x0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = plVar3 + 10;
            }
            FUN_00bae3c0(param_2,&local_48,plVar6);
            (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
            cVar5 = '\0';
          }
          else {
            cVar1 = FUN_00bac690(local_22);
            if ((cVar1 == '\0') && (local_22 != 0x5f)) {
              in_stack_ffffffffffffff08 = &local_50;
              uVar4 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,9,in_stack_ffffffffffffff08,0xffffffff);
              FUN_004134c0(uVar4);
            }
            else {
              (**(code **)(*param_3 + 0x70))(param_3,local_22);
              plVar3 = (longlong *)FUN_00bb3530(param_1,0);
              if (plVar3 == (longlong *)0x0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                plVar6 = plVar3 + 10;
              }
              FUN_00bae3c0(param_2,&local_50,plVar6);
              (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
              cVar5 = '\0';
            }
          }
        }
      }
      else if (cVar5 == '\x02') {
        if (local_22 == 0x3e) {
          (**(code **)(*param_3 + 0x78))(param_3,&local_20);
          (**(code **)*param_2)(param_2,&local_58);
          iVar2 = FUN_00416db0(local_20,local_58);
          if (iVar2 == 0) {
            uVar4 = *(undefined8 *)(param_1 + 0xb8);
            iVar2 = FUN_004b0420(uVar4);
            FUN_004b0260(uVar4,&local_68,iVar2 + -1);
            FUN_0041b890(&local_70,local_68,&DAT_00bb4ae4);
            (**(code **)(*local_70 + 0x40))(local_70,&local_60);
            iVar2 = FUN_00416db0(local_20,local_60);
            if (iVar2 == 0) {
              uVar4 = *(undefined8 *)(param_1 + 0xb8);
              iVar2 = FUN_004b0420(uVar4);
              FUN_004b00d0(uVar4,iVar2 + -1);
              goto LAB_00bb4998;
            }
          }
          local_90 = local_20;
          local_88 = 0x11;
          (**(code **)*param_2)(param_2,&local_98);
          local_80 = local_98;
          local_78 = 0x11;
          in_stack_ffffffffffffff08 = &local_90;
          uVar4 = FUN_00bad230(&PTR_FUN_00b9ee48,1,3,0x43,in_stack_ffffffffffffff08,1);
          FUN_004134c0(uVar4);
        }
        else {
          (**(code **)(*param_3 + 0x70))(param_3,local_22);
        }
      }
      else if (cVar5 == '\x03') {
        if (local_22 == 0x2d) {
          cVar1 = (**(code **)(*param_3 + 0x60))(param_3,&local_22);
          if ((cVar1 == '\0') || (local_22 != 0x2d)) {
            (**(code **)(*param_3 + 0x78))(param_3,&local_c0);
            local_b8 = local_c0;
            local_b0 = 0x11;
            in_stack_ffffffffffffff08 =
                 (undefined8 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffff00000000);
            uVar4 = FUN_0044d530(&PTR_FUN_004334c0,1,L"Invalid node %s",&local_b8,
                                 in_stack_ffffffffffffff08);
            FUN_004134c0(uVar4);
          }
          else {
            plVar3 = (longlong *)FUN_00bb3400(param_1,0);
            if (plVar3 == (longlong *)0x0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = plVar3 + 10;
            }
            FUN_00bae3c0(param_2,&local_a8,plVar6);
            (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
            cVar5 = '\0';
          }
        }
        else if (local_22 == 0x44) {
          (**(code **)(*param_3 + 0x68))(param_3,&local_30);
          iVar2 = FUN_00416db0(local_30,L"OCTYPE");
          if (iVar2 == 0) {
            (**(code **)(*param_3 + 0x88))(param_3);
            plVar3 = (longlong *)FUN_00bb3460(param_1,0);
            if (plVar3 == (longlong *)0x0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = plVar3 + 10;
            }
            FUN_00bae3c0(param_2,&local_c8,plVar6);
            (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
            if (plVar3 == (longlong *)0x0) {
              plVar3 = (longlong *)0x0;
            }
            else {
              plVar3 = plVar3 + 2;
            }
            FUN_0041b890(param_1 + 0x58,plVar3);
            cVar5 = '\0';
          }
        }
        else if (local_22 == 0x5b) {
          (**(code **)(*param_3 + 0x68))(param_3,&local_30);
          iVar2 = FUN_00416db0(local_30,L"CDATA[");
          if (iVar2 == 0) {
            (**(code **)(*param_3 + 0x88))(param_3);
            plVar3 = (longlong *)FUN_00bb33a0(param_1,0);
            if (plVar3 == (longlong *)0x0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = plVar3 + 10;
            }
            FUN_00bae3c0(param_2,&local_a0,plVar6);
            (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
            cVar5 = '\0';
          }
        }
      }
      goto LAB_00bb493c;
    }
    if (local_22 == 0x3c) {
      cVar5 = '\x01';
    }
    else {
      (**(code **)(*param_3 + 0x58))(param_3);
      plVar3 = (longlong *)FUN_00bb3640(param_1,0);
      if (plVar3 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = plVar3 + 10;
      }
      FUN_00bae3c0(param_2,local_40,plVar6);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
    }
  } while( true );
}

