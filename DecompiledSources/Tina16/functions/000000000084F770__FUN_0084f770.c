/* Ghidra address: 0084f770 */
/* Ghidra symbol: FUN_0084f770 */


void FUN_0084f770(longlong param_1,undefined4 param_2,undefined2 param_3,uint param_4,
                 undefined4 param_5)

{
  char cVar1;
  code *pcVar2;
  uint local_30;
  undefined4 local_2c;
  
  if (((char)param_2 == '\0') && (*(char *)(param_1 + 0x530) != '\0')) {
    local_2c = param_5;
    local_30 = param_4;
    cVar1 = FUN_00850600(param_1,&local_30);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x538) == '\0') {
        FUN_0064e190(param_1,1);
        *(undefined1 *)(param_1 + 0x539) = 1;
        FUN_00850300(param_1,param_4,param_5);
        if (*(longlong *)(param_1 + 0x528) != 0) {
          pcVar2 = (code *)FUN_00411550(param_1,0xffa9);
          (*pcVar2)(param_1);
        }
      }
      else {
        pcVar2 = (code *)FUN_00411550(param_1,0xffab);
        (*pcVar2)(param_1,0);
      }
    }
  }
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  return;
}

