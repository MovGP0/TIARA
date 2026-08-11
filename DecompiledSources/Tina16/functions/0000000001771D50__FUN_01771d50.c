/* Ghidra address: 01771d50 */
/* Ghidra symbol: FUN_01771d50 */


char FUN_01771d50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  char local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_60 = param_1;
  local_58 = param_2;
  local_49 = FUN_01771350(param_1,param_2);
  lVar1 = local_58;
  if (local_49 != '\0') {
    if (((local_49 != '\0') &&
        (cVar2 = FUN_004b33d0(*(undefined8 *)(local_60 + 200),*(undefined8 *)(local_58 + 200)),
        cVar2 != '\0')) &&
       (cVar2 = FUN_004b33d0(*(undefined8 *)(local_60 + 0xd0),*(undefined8 *)(lVar1 + 0xd0)),
       cVar2 != '\0')) {
      (**(code **)(**(longlong **)(local_60 + 0xd8) + 0x38))
                (*(longlong **)(local_60 + 0xd8),&local_20);
      (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x38))(*(longlong **)(lVar1 + 0xd8),&local_28);
      cVar2 = FUN_01b234f0(local_20,local_28);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(local_60 + 0xf0) + 0x38))
                  (*(longlong **)(local_60 + 0xf0),&local_30);
        (**(code **)(**(longlong **)(lVar1 + 0xf0) + 0x38))(*(longlong **)(lVar1 + 0xf0),&local_38);
        cVar2 = FUN_01b234f0(local_30,local_38);
        if (((((cVar2 != '\0') &&
              (cVar2 = FUN_01771d30(auStack_88,*(undefined4 *)(local_60 + 0x100),
                                    *(undefined4 *)(lVar1 + 0x100)), cVar2 != '\0')) &&
             ((cVar2 = FUN_00527160(*(undefined8 *)(local_60 + 0x108),*(undefined8 *)(lVar1 + 0x108)
                                    ,0x3c32725dd1d243ac), cVar2 != '\0' &&
              ((*(int *)(local_60 + 0x120) == *(int *)(lVar1 + 0x120) &&
               (*(int *)(local_60 + 0x124) == *(int *)(lVar1 + 0x124))))))) &&
            (*(int *)(local_60 + 0x128) == *(int *)(lVar1 + 0x128))) &&
           ((iVar3 = FUN_00416db0(*(undefined8 *)(local_60 + 0x148),*(undefined8 *)(lVar1 + 0x148)),
            iVar3 == 0 &&
            (iVar3 = FUN_00416db0(*(undefined8 *)(local_60 + 0x150),*(undefined8 *)(lVar1 + 0x150)),
            iVar3 == 0)))) {
          (**(code **)(**(longlong **)(local_60 + 0x1a0) + 0x38))
                    (*(longlong **)(local_60 + 0x1a0),&local_40);
          (**(code **)(**(longlong **)(lVar1 + 0x1a0) + 0x38))
                    (*(longlong **)(lVar1 + 0x1a0),&local_48);
          cVar2 = FUN_01b234f0(local_40,local_48);
          if (cVar2 != '\0') {
            local_49 = '\x01';
            goto LAB_01771f86;
          }
        }
      }
    }
    local_49 = '\0';
  }
LAB_01771f86:
  FUN_00414560(&local_48,6);
  return local_49;
}

