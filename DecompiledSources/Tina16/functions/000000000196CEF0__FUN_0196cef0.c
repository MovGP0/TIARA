/* Ghidra address: 0196cef0 */
/* Ghidra symbol: FUN_0196cef0 */


void FUN_0196cef0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  FUN_00414ad0(param_1 + 0x18,param_2);
  if ((param_2 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x440) != 0)) {
    local_20 = FUN_005ea3c0(&DAT_005e7878,1);
    FUN_005ea670(local_20,0xffffffff80000002);
    cVar1 = FUN_005eaa60(local_20,PTR_u__Software_Fast_Reports_Connectio_01fb7de0);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_20,&local_28,param_2);
      if (local_28 != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x58) + 0x440))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x448),local_28);
      }
      FUN_005ea630(local_20);
    }
    FUN_005ea670(local_20,0xffffffff80000001);
    cVar1 = FUN_005eaa60(local_20,PTR_u__Software_Fast_Reports_Connectio_01fb7de0);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_20,&local_28,param_2);
      if (local_28 != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x58) + 0x440))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x448),local_28);
      }
      FUN_005ea630(local_20);
    }
    FUN_005ea670(local_20,0xffffffff80000002);
    FUN_00416ba0(&local_38,PTR_u__Software_Fast_Reports_Connectio_01fb7de0,&DAT_0196d188);
    cVar1 = FUN_005eaa60(local_20,local_38);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_20,&local_28,param_2);
      if (local_28 != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x58) + 0x440))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x448),local_28);
      }
      FUN_005ea630(local_20);
    }
    FUN_005ea670(local_20,0xffffffff80000001);
    FUN_00416ba0(&local_40,PTR_u__Software_Fast_Reports_Connectio_01fb7de0,&DAT_0196d188);
    cVar1 = FUN_005eaa60(local_20,local_40);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_20,&local_28,param_2);
      if (local_28 != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x58) + 0x440))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x448),local_28);
      }
      FUN_005ea630(local_20);
    }
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_28);
  return;
}

