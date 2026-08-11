/* Ghidra address: 01aed930 */
/* Ghidra symbol: FUN_01aed930 */


void FUN_01aed930(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  int extraout_var;
  undefined8 local_res10 [3];
  undefined8 in_stack_ffffffffffffff68;
  int local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_4a;
  undefined8 local_48;
  int local_3c [3];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_4a = 1;
  iVar2 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
  if (local_3c[0] != 2) {
    if (((*(char *)(param_1 + 0x19) == '\0') && (iVar2 != 0x3f2)) && (iVar2 != 0x3fc))
    goto LAB_01aee438;
    if (iVar2 < 0x429) {
      if (iVar2 == 0x428) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8160(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),4,uVar3,uVar4);
      }
      else if (iVar2 < 0x41c) {
        if (iVar2 == 0x41b) {
          uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          uVar5 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          uVar6 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          cVar1 = FUN_01aece00(param_1,uVar4,&local_58);
          if (cVar1 != '\0') {
            (*(code *)local_58[0x2b])
                      (local_58[0x2c],*(undefined8 *)PTR_DAT_02004030,0,8,CONCAT44(uVar3,uVar5),
                       uVar6);
          }
        }
        else if (iVar2 < 0x407) {
          if (iVar2 == 0x406) {
            uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
            FUN_01aed0b0(param_1,&local_48,local_res10,&local_4a,local_3c);
            cVar1 = FUN_01aece00(param_1,uVar3,&local_58);
            if (cVar1 != '\0') {
              cVar1 = FUN_01aeced0(param_1,local_58,local_48,&local_60);
              if (cVar1 != '\0') {
                (**(code **)(*local_60 + 0xb0))(local_60);
              }
            }
          }
          else if (iVar2 == 0x3f2) {
            uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
            cVar1 = FUN_01aece00(param_1,uVar3,&local_58);
            if (cVar1 != '\0') {
              FUN_00805990(local_58);
            }
          }
          else if (iVar2 == 0x3fc) {
            uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
            uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
            uVar5 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
            uVar6 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
            uVar7 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
            cVar1 = FUN_01aece00(param_1,uVar3,&local_58);
            if (cVar1 != '\0') {
              FUN_00806af0(local_58,uVar4);
              FUN_00806b40(local_58,uVar5);
              FUN_0064cbf0(local_58,uVar6);
              FUN_0064cc50(local_58,uVar7);
              FUN_008059a0(local_58);
            }
          }
        }
        else if (iVar2 == 0x410) {
          uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          FUN_01aed0b0(param_1,&local_48,local_res10,&local_4a,local_3c);
          cVar1 = FUN_01aece00(param_1,uVar3,&local_58);
          if (cVar1 != '\0') {
            cVar1 = FUN_01aecfc0(param_1,local_58,local_48,&local_68);
            if (cVar1 != '\0') {
              pcVar9 = (code *)FUN_00411550(local_68,0xffea);
              (*pcVar9)(local_68);
            }
          }
        }
        else if (iVar2 == 0x41a) {
          if (*(char *)(param_1 + 0x19) == '\x02') {
            FUN_013a4f70(*(undefined8 *)PTR_DAT_020032b8);
            goto LAB_01aee438;
          }
          uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          iVar2 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          iVar8 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          cVar1 = FUN_01aece00(param_1,uVar3,&local_58);
          if (cVar1 != '\0') {
            thunk_FUN_03cc0d62(local_70);
            local_78 = (**(code **)(*local_58 + 0xd8))(local_58);
            local_78 = local_78 + iVar2;
            (**(code **)(*local_58 + 0xd8))(local_58);
            local_74 = extraout_var + iVar8;
            FUN_01aed730(param_1,local_70,&local_78,500);
          }
        }
      }
      else if (iVar2 < 0x426) {
        if (iVar2 == 0x425) {
          uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          FUN_01ae8160(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),1,uVar3,uVar4);
        }
        else if (iVar2 == 0x41c) {
          uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          uVar5 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          uVar6 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          cVar1 = FUN_01aece00(param_1,uVar4,&local_58);
          if (cVar1 != '\0') {
            (*(code *)local_58[0x2f])
                      (local_58[0x30],*(undefined8 *)PTR_DAT_02004030,0,8,CONCAT44(uVar3,uVar5),
                       uVar6);
          }
        }
        else if (iVar2 == 0x424) {
          uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          FUN_01ae8160(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,uVar3,uVar4);
        }
      }
      else if (iVar2 == 0x426) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8160(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),2,uVar3,uVar4);
      }
      else if (iVar2 == 0x427) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8160(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),3,uVar3,uVar4);
      }
    }
    else if (iVar2 < 0x431) {
      if (iVar2 == 0x430) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),2,uVar3,uVar4);
      }
      else if (iVar2 < 0x42c) {
        if (iVar2 == 0x42b) {
          uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          FUN_01ae8160(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),7,0,uVar3);
        }
        else if (iVar2 == 0x429) {
          uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          FUN_01ae8160(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),5,0,uVar3);
        }
        else if (iVar2 == 0x42a) {
          uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
          FUN_01ae8160(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),6,0,uVar3);
        }
      }
      else if (iVar2 == 0x42e) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,uVar3,uVar4);
      }
      else if (iVar2 == 0x42f) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),1,uVar3,uVar4);
      }
    }
    else if (iVar2 < 0x434) {
      if (iVar2 == 0x433) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),5,0,uVar3);
      }
      else if (iVar2 == 0x431) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),3,uVar3,uVar4);
      }
      else if (iVar2 == 0x432) {
        uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        uVar4 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
        FUN_01ae8380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),4,uVar3,uVar4);
      }
    }
    else if (iVar2 == 0x434) {
      uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
      FUN_01ae8380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),6,0,uVar3);
    }
    else if (iVar2 == 0x435) {
      uVar3 = FUN_01aed1f0(param_1,local_res10,&local_4a,local_3c);
      FUN_01ae8380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),7,0,uVar3);
    }
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_013a4f70(*(undefined8 *)PTR_DAT_020032b8);
  }
LAB_01aee438:
  FUN_00414480(&local_48);
  FUN_00414480(local_res10);
  return;
}

