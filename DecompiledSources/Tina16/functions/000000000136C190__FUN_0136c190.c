/* Ghidra address: 0136c190 */
/* Ghidra symbol: FUN_0136c190 */


undefined1 FUN_0136c190(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_51;
  undefined8 local_50 [2];
  longlong local_40;
  undefined1 local_34 [4];
  longlong *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_50[0] = 0;
  local_40 = 0;
  if (*(longlong *)PTR_DAT_02003660 != 0) {
    puVar5 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)(param_1 + 0x10),0);
    iVar2 = FUN_00416db0(*puVar5,*(undefined8 *)(*(longlong *)PTR_DAT_02003660 + 0x730));
    if (iVar2 == 0) {
      uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x18));
      FUN_01a982d0(uVar6,param_2,param_3,&local_24,&local_28);
      local_1c = local_24;
      local_20 = local_28;
      FUN_01b1cd00(&local_1c,&local_20);
      iVar2 = FUN_01995e50(*(undefined8 *)(param_1 + 0x18),local_1c,local_20,&local_30,local_34);
      if (iVar2 < 0) {
        local_30 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))
                             (*(longlong **)(param_1 + 0x18),local_24,local_28);
        if (local_30 != (longlong *)0x0) {
          cVar1 = FUN_0198a580(local_30);
          if (cVar1 == '\x04') {
            uVar3 = FUN_019ac2d0(*(undefined8 *)(param_1 + 0x18),local_30);
            if (*(char *)(*(longlong *)PTR_DAT_02003660 + 0xa9) != '\0') {
              (**(code **)(*local_30 + 0x288))(local_30,&local_40);
              if (local_40 == 0) {
                FUN_0043f750(local_50,uVar3);
                FUN_00416ba0(&local_40,L"no_label_",local_50[0]);
              }
              uVar3 = (**(code **)(*local_30 + 0x210))(local_30,0);
              uVar4 = (**(code **)(*local_30 + 0x210))(local_30,1);
              FUN_012b8b40(*(undefined8 *)PTR_DAT_02003660,local_40,uVar3,uVar4);
            }
            goto LAB_0136c3a9;
          }
        }
        thunk_FUN_03f3ed6d(0xffff);
      }
      else if (*(char *)(*(longlong *)PTR_DAT_02003660 + 0xa9) != '\0') {
        FUN_012b9260(*(undefined8 *)PTR_DAT_02003660,iVar2);
      }
LAB_0136c3a9:
      local_51 = 0;
      goto LAB_0136c3af;
    }
  }
  FUN_012b8b40(*(undefined8 *)PTR_DAT_02003660,&DAT_0136c414,0xffffff9c,0xffffff9c);
  FUN_012b9260(*(undefined8 *)PTR_DAT_02003660,0xffffff9c);
LAB_0136c3af:
  FUN_00414480(local_50);
  FUN_00414480(&local_40);
  return local_51;
}

