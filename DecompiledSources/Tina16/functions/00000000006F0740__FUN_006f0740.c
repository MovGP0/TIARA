/* Ghidra address: 006f0740 */
/* Ghidra symbol: FUN_006f0740 */


void FUN_006f0740(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_8f;
  undefined4 local_8b;
  undefined4 local_87;
  int local_83;
  undefined4 local_7f;
  undefined8 local_7b;
  byte local_73;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  int local_66;
  undefined4 local_62;
  int local_5e;
  byte local_5a;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  int local_4d;
  int local_49;
  byte local_45;
  byte local_44;
  char local_43;
  short local_42;
  int local_40;
  undefined1 local_3c [12];
  
  local_98 = 0;
  FUN_006efe10(param_1);
  lVar2 = (**(code **)*param_2)(param_2);
  if (lVar2 != 0) {
    FUN_004b84c0(param_2,&local_43,1);
    if (local_43 == '\x01') {
      FUN_004b84c0(param_2,local_3c,4);
      FUN_004b84c0(param_2,&local_40,4);
      iVar5 = local_40;
      if (-1 < local_40 + -1) {
        do {
          FUN_004b84c0(param_2,&local_59,0x15);
          lVar2 = FUN_006efb70(param_1);
          FUN_006ef370(lVar2,0,local_59);
          FUN_006ef370(lVar2,1,local_51);
          FUN_006ef370(lVar2,2,local_55);
          FUN_006ef160(lVar2,(longlong)local_49);
          FUN_006eeef0(lVar2,0xffffffff);
          FUN_004169f0(&local_98,local_45);
          uVar3 = FUN_00414de0(&local_98);
          FUN_004b84c0(param_2,uVar3,(uint)local_45 * 2);
          FUN_006ef050(lVar2,local_98);
          iVar6 = local_4d;
          if (-1 < local_4d + -1) {
            do {
              FUN_004b84c0(param_2,&local_44,1);
              FUN_004169f0(&local_98,local_44);
              uVar3 = FUN_00414de0(&local_98);
              FUN_004b84c0(param_2,uVar3,(uint)local_44 * 2);
              (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x78))
                        (*(longlong **)(lVar2 + 0x10),local_98);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if ((local_43 == '\x03') || (local_43 == '\x05')) {
      FUN_004b84c0(param_2,local_3c,4);
      FUN_004b84c0(param_2,&local_40,4);
      iVar5 = local_40;
      if (-1 < local_40 + -1) {
        do {
          FUN_004b84c0(param_2,&local_72,0x19);
          lVar2 = FUN_006efb70(param_1);
          FUN_006ef370(lVar2,0,local_72);
          FUN_006ef370(lVar2,1,local_6a);
          FUN_006ef370(lVar2,2,local_6e);
          FUN_006ef160(lVar2,(longlong)local_5e);
          FUN_006eeef0(lVar2,local_62);
          FUN_004169f0(&local_98,local_5a);
          uVar3 = FUN_00414de0(&local_98);
          FUN_004b84c0(param_2,uVar3,(uint)local_5a * 2);
          FUN_006ef050(lVar2,local_98);
          iVar6 = local_66;
          if (-1 < local_66 + -1) {
            do {
              FUN_004b84c0(param_2,&local_44,1);
              FUN_004169f0(&local_98,local_44);
              uVar3 = FUN_00414de0(&local_98);
              FUN_004b84c0(param_2,uVar3,(uint)local_44 * 2);
              local_a0 = 0;
              if (local_43 == '\x05') {
                FUN_004b84c0(param_2,&local_a0,4);
              }
              (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x80))
                        (*(longlong **)(lVar2 + 0x10),local_98,local_a0);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      if (local_43 != '\x06') goto LAB_006f0d27;
      FUN_004b84c0(param_2,local_3c,4);
      FUN_004b84c0(param_2,&local_40,4);
      iVar5 = local_40;
      if (-1 < local_40 + -1) {
        do {
          FUN_004b84c0(param_2,&local_8f,0x1d);
          lVar2 = FUN_006efb70(param_1);
          FUN_006ef370(lVar2,0,local_8f);
          FUN_006ef370(lVar2,1,local_87);
          FUN_006ef370(lVar2,2,local_8b);
          FUN_006ef160(lVar2,local_7b);
          FUN_006eeef0(lVar2,local_7f);
          FUN_004169f0(&local_98,local_73);
          uVar3 = FUN_00414de0(&local_98);
          FUN_004b84c0(param_2,uVar3,(uint)local_73 * 2);
          FUN_006ef050(lVar2,local_98);
          iVar6 = local_83;
          if (-1 < local_83 + -1) {
            do {
              FUN_004b84c0(param_2,&local_44,1);
              FUN_004169f0(&local_98,local_44);
              uVar3 = FUN_00414de0(&local_98);
              FUN_004b84c0(param_2,uVar3,(uint)local_44 * 2);
              local_a0 = 0;
              FUN_004b84c0(param_2,&local_a0,8);
              (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x80))
                        (*(longlong **)(lVar2 + 0x10),local_98,local_a0);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    iVar5 = FUN_006efc30();
    iVar6 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_006efcb0(param_1,iVar6);
        iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x28))();
        iVar4 = 0;
        if (-1 < iVar1 + -1) {
          do {
            FUN_004b84c0(param_2,&local_42,2);
            FUN_006ef850(lVar2,iVar4,(longlong)local_42);
            iVar4 = iVar4 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
LAB_006f0d27:
  FUN_00414480(&local_98);
  return;
}

