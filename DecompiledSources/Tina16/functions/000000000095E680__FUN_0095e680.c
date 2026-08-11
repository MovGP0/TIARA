/* Ghidra address: 0095e680 */
/* Ghidra symbol: FUN_0095e680 */


undefined1 FUN_0095e680(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30;
  int local_28;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_21 = 1;
  iVar2 = (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6]);
  if (0 < iVar2) {
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
    if (param_2 != 0) {
      (**(code **)(*local_20 + 0x10))(local_20,param_2);
    }
    (**(code **)*param_1)(param_1,&local_48);
    (**(code **)(*local_20 + 0x68))(local_20,local_48);
    iVar2 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
    local_28 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6],&local_50,local_28);
        iVar3 = (**(code **)(*local_20 + 0xb8))(local_20,local_50);
        if (iVar3 != -1) {
LAB_0095e80f:
          local_21 = 0;
          FUN_0095e840(0,local_40);
          goto LAB_0095e81d;
        }
        (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6],&local_58,local_28);
        local_30 = (longlong *)
                   (**(code **)(*(longlong *)param_1[3] + 0x30))((longlong *)param_1[3],local_58);
        if ((local_30 != (longlong *)0x0) &&
           (cVar1 = (**(code **)(*local_30 + 8))(local_30,local_20), cVar1 == '\0'))
        goto LAB_0095e80f;
        local_28 = local_28 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_20);
  }
LAB_0095e81d:
  FUN_004145c0(&local_58,3);
  return local_21;
}

