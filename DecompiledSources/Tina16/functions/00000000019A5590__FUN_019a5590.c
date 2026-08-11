/* Ghidra address: 019a5590 */
/* Ghidra symbol: FUN_019a5590 */


void FUN_019a5590(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_98;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_20 = 0;
  puVar1 = auStack_98;
  if (param_2 != (longlong *)0x0) {
    cVar2 = FUN_0198a580(param_2);
    puVar1 = local_40;
    if (cVar2 == '\x04') {
      cVar2 = FUN_01d04d40(param_2);
      puVar1 = local_40;
      if ((cVar2 != '\0') &&
         ((*(char *)(param_1 + 0x60) == '\0' || (*(char *)(param_2[0x35] + 0x61) != '\0')))) {
        local_20 = 0;
        (**(code **)(*param_2 + 0x288))(param_2,&local_48);
        local_78 = *(undefined8 *)(param_2[0x35] + 0x38);
        local_70 = &DAT_019a57ac;
        local_68 = &DAT_019a57bc;
        FUN_00416cd0(&local_20,5,local_48,&DAT_019a5798);
        FUN_00414480(&local_28);
        local_30 = *(undefined8 *)(param_2[0x35] + 0x88);
        FUN_0044a3a0(&local_28,L"d-mmm-yyyy, hh:mm",local_30,PTR_DAT_02004830);
        FUN_00416ba0(&local_50,local_20,local_28);
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))
                  (*(longlong **)(param_1 + 0x58),local_50,param_2);
        FUN_00414480(&local_20);
        FUN_00414480(&local_28);
        puVar1 = local_40;
      }
    }
  }
  local_40 = puVar1;
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_28);
  return;
}

