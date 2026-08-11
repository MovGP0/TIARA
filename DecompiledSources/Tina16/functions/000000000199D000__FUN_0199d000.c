/* Ghidra address: 0199d000 */
/* Ghidra symbol: FUN_0199d000 */


void FUN_0199d000(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_4c;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0;
  if ((((param_2 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')) &&
      (*(char *)((longlong)param_2 + 0xb) == '\0')) &&
     (cVar1 = FUN_0198a580(param_2), cVar1 != '\x05')) {
    iVar2 = (**(code **)(*param_2 + 0x1c8))();
    local_4c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(*param_2 + 0x210))(param_2,local_4c);
        uVar4 = (**(code **)(param_1 + 0x48))
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x220),uVar3,&local_34);
        cVar1 = FUN_015f8ed0(local_34);
        if (cVar1 == '\0') {
          FUN_01d43440(&local_30,uVar4);
          (**(code **)(*param_2 + 0x1f0))(param_2,local_4c,&local_38,&local_3c);
          local_38 = local_38 + -6;
          local_3c = local_3c + -7;
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                    (*(longlong **)(param_1 + 0x40),local_38,local_3c);
          FUN_0199c8c0(*(undefined8 *)(param_1 + 0x40),local_38,local_3c,1,local_30,0);
        }
        else {
          (**(code **)(*param_2 + 0x1f0))(param_2,local_4c,&local_38,&local_3c);
          FUN_0199c990(*(undefined8 *)(param_1 + 0x40),local_38 + -2,local_3c + -2,
                       *(undefined4 *)(&DAT_01fbdfb4 + ((ulonglong)uVar4 & 0xff) * 8));
        }
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414480(&local_30);
  return;
}

