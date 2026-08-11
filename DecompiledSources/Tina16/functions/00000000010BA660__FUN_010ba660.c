/* Ghidra address: 010ba660 */
/* Ghidra symbol: FUN_010ba660 */


void FUN_010ba660(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong in_stack_fffffffffffffee8;
  undefined8 *puVar4;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  char local_7c;
  undefined1 local_7b;
  undefined4 local_78;
  int local_70;
  int local_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  char local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_00417580(&local_58,&DAT_010ba1d0);
  FUN_00417580(&local_88,&DAT_010ba278);
  if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x12d) == '\0')) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_98);
    if (*(char *)((longlong)param_2 + 0x12d) == '\0') {
      if (*(char *)((longlong)param_1 + 0xb) == '\0') {
        (**(code **)(*param_2 + 0xf0))(param_2,0);
        if (*(char *)((longlong)param_1 + 9) == '\0') {
          iVar3 = 0;
          if (*(char *)((longlong)param_1 + 10) == '\0') {
            FUN_01a9a440(param_2,0x10);
          }
          else {
            FUN_01a9a440(param_2,3);
            iVar3 = 0;
          }
          while( true ) {
            cVar1 = FUN_010bbb70(param_1,param_1[6],iVar3,local_2c);
            if (cVar1 == '\0') break;
            (**(code **)(*param_2 + 0xe8))(param_2,local_2c[0]);
            in_stack_fffffffffffffee8 =
                 CONCAT44((int)(in_stack_fffffffffffffee8 >> 0x20),(int)param_1[2] + local_1c);
            (**(code **)(*param_2 + 0x58))
                      (param_2,*(int *)((longlong)param_1 + 0xc) + local_28,
                       (int)param_1[2] + local_24,*(int *)((longlong)param_1 + 0xc) + local_20,
                       in_stack_fffffffffffffee8);
            iVar3 = iVar3 + 1;
          }
          iVar3 = 0;
          while( true ) {
            cVar1 = FUN_010bbd50(param_1,param_1[6],iVar3,&local_58);
            if (cVar1 == '\0') break;
            if (local_4c == '\0') {
              uVar2 = 300;
            }
            else {
              uVar2 = 700;
            }
            in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
            FUN_01a98770(param_2,*(int *)((longlong)param_1 + 0xc) + local_40,
                         (int)param_1[2] + local_3c,0,in_stack_fffffffffffffee8,0,0x3ff0000000000000
                         ,0x3ff0000000000000,local_48,local_50,uVar2,local_4b,
                         *(undefined1 *)((longlong)param_1 + 0xb),local_58,local_38,0,0);
            iVar3 = iVar3 + 1;
          }
          iVar3 = 0;
          while( true ) {
            puVar4 = &local_88;
            cVar1 = FUN_010bb8c0(param_1,param_1[6],param_1[5],iVar3,puVar4);
            if (cVar1 == '\0') break;
            if (local_7c == '\0') {
              uVar2 = 300;
            }
            else {
              uVar2 = 700;
            }
            FUN_01a98770(param_2,*(int *)((longlong)param_1 + 0xc) + local_70,
                         (int)param_1[2] + local_6c,0,(ulonglong)puVar4 & 0xffffffffffffff00,0,
                         0x3ff0000000000000,0x3ff0000000000000,local_78,local_80,uVar2,local_7b,
                         *(undefined1 *)((longlong)param_1 + 0xb),local_88,local_60,0,0);
            iVar3 = iVar3 + 1;
          }
        }
        else {
          (**(code **)(*param_2 + 0x30))
                    (param_2,local_98 + -2,local_94 + -2,local_90 + 2,local_8c + 2);
        }
      }
      else {
        FUN_01a9a440(param_2,0xe);
        (**(code **)(*param_2 + 0xa0))(param_2,local_98,local_94,local_90,local_8c);
      }
    }
    else {
      FUN_01a98380(param_2,local_98,local_94,&local_98,&local_94);
      FUN_01a98380(param_2,local_90,local_8c,&local_90,&local_8c);
    }
  }
  FUN_00417740(&local_88,&DAT_010ba278);
  FUN_00417740(&local_58,&DAT_010ba1d0);
  return;
}

