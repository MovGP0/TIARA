/* Ghidra address: 01994420 */
/* Ghidra symbol: FUN_01994420 */


undefined1 FUN_01994420(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  if (param_2 == (longlong *)0x0) goto LAB_01994646;
  cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
  if (cVar1 == '\0') goto LAB_01994646;
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x210));
  cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
  if (cVar1 != '\0') {
    FUN_01991f70(*(undefined8 *)(param_1 + 0x60),param_2,0);
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      cVar1 = FUN_01d04d70(param_2);
      if (cVar1 != '\0') {
        FUN_0176cf30(param_2[0x35]);
      }
      if (*(longlong *)PTR_DAT_020015a8 != 0) {
        FUN_013ac0c0(*(undefined8 *)PTR_DAT_020015a8,param_2);
      }
      uVar4 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),PTR_DAT_02004010[0x814]);
      FUN_017be0e0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x210),param_1 + 0x30,
                   PTR_DAT_02004010[0x816],uVar4,*PTR_DAT_020037e8,PTR_DAT_02004010[0x815],
                   *PTR_DAT_02005310);
      uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
      plVar3 = (longlong *)FUN_0198d430(*(undefined8 *)(param_1 + 0x60));
      (**(code **)(*plVar3 + 0x30))
                (plVar3,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                 *(undefined4 *)(param_1 + 0x38),CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x3c)));
    }
    FUN_017ff4f0(param_2,&local_20);
    FUN_00416cd0(local_30,3,L"DeletePart(",local_20,&LAB_019946c8);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
              (*(longlong **)(param_1 + 0x28),local_30[0]);
    FUN_0135ac90(*(undefined8 *)PTR_DAT_02001f10,local_20);
    if (*(char *)(param_1 + 0x27) == '\0') {
      cVar1 = FUN_0198a580(param_2);
      if (cVar1 == '\x05') goto LAB_01994621;
      uVar2 = 0;
    }
    else {
LAB_01994621:
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x27) = uVar2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x218) = 0;
  }
  FUN_0198b6d0(*(undefined8 *)(param_1 + 0x60),param_2);
LAB_01994646:
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return 0;
}

