/* Ghidra address: 01052a70 */
/* Ghidra symbol: FUN_01052a70 */


void FUN_01052a70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  cVar1 = FUN_00f8d140(*(undefined8 *)(param_1 + 0x9d8));
  if ((cVar1 == '\0') || (cVar1 = FUN_00f8d6b0(*(undefined8 *)(param_1 + 0x9d8)), cVar1 != '\0')) {
    cVar1 = FUN_00f629a0(*(undefined8 *)(param_1 + 0x980));
    if (cVar1 != '\0') {
      FUN_01053ee0(param_1);
    }
    cVar1 = FUN_01053ed0(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x8eb) = 1;
      *(undefined1 *)(param_1 + 0x6c4) = 0;
      FUN_00f8d300(*(undefined8 *)(param_1 + 0x9d8),1);
      FUN_00f8d1c0(*(undefined8 *)(param_1 + 0x9d8),0);
      _MCU_SetDebugMode(*(undefined8 *)(param_1 + 0x970),1);
      _MCU_SetAborted(*(undefined8 *)(param_1 + 0x970),0);
      cVar1 = FUN_010527b0(param_1);
      if ((cVar1 == '\0') || (cVar1 = FUN_00f8d6b0(*(undefined8 *)(param_1 + 0x9d8)), cVar1 != '\0')
         ) {
        cVar1 = FUN_00f8d6b0(*(undefined8 *)(param_1 + 0x9d8));
        if (cVar1 == '\0') {
          FUN_00f8d6c0(*(undefined8 *)(param_1 + 0x9d8),1);
        }
        FUN_00f8d160(*(undefined8 *)(param_1 + 0x9d8),*(undefined1 *)(param_1 + 0x940));
        FUN_00f8da20(*(undefined8 *)(param_1 + 0x9d8),param_2);
      }
      else {
        while ((*(char *)(param_1 + 0x8ea) == '\0' &&
               (cVar1 = FUN_00f8d190(*(undefined8 *)(param_1 + 0x9d8)), cVar1 != '\0'))) {
          FUN_01052800(param_1,1);
          FUN_00f8d220(*(undefined8 *)(param_1 + 0x9d8),&local_20);
          cVar1 = FUN_010521e0(param_1,local_20);
          if (cVar1 == '\0') {
            uVar3 = FUN_00f8d1d0(*(undefined8 *)(param_1 + 0x9d8));
            if ((char)uVar3 != '\0') goto LAB_01052bce;
            uVar2 = 0;
          }
          else {
            uVar3 = FUN_00f8d300(*(undefined8 *)(param_1 + 0x9d8),0);
LAB_01052bce:
            uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          }
          FUN_00f8d1c0(*(undefined8 *)(param_1 + 0x9d8),uVar2);
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        }
        FUN_00f8d220(*(undefined8 *)(param_1 + 0x9d8),&local_20);
        FUN_00f65450(*(undefined8 *)(param_1 + 0x980),local_20);
        FUN_010508e0(param_1);
      }
    }
    if (((*(int *)(param_1 + 0x918) == 1) && (*(char *)(param_1 + 0x8eb) != '\0')) &&
       (*(char *)(param_1 + 0x8ea) != '\0')) {
      FUN_00f8d1a0(*(undefined8 *)(param_1 + 0x9d8),1);
      if (*(char *)(param_1 + 0x941) == '\0') {
        FUN_00f8f400(*(undefined8 *)(param_1 + 0x9d8),param_2);
      }
      else {
        FUN_00f8e070(*(undefined8 *)(param_1 + 0x9d8),0);
      }
    }
    *(undefined1 *)(param_1 + 0x8eb) = 0;
  }
  FUN_00414480(&local_20);
  return;
}

