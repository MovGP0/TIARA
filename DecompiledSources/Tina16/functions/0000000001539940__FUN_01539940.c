/* Ghidra address: 01539940 */
/* Ghidra symbol: FUN_01539940 */


void FUN_01539940(longlong *param_1,char param_2)

{
  short sVar1;
  char *pcVar2;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  if (param_1 != (longlong *)0x0) {
    sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((((sVar1 == 0xf) || (sVar1 == 0x10)) || (sVar1 == 0xd9)) || (sVar1 == 0xda)) {
      pcVar2 = (char *)FUN_01cfde70(param_1,6,0,&local_19,&local_1a,&local_1b);
      if ((*pcVar2 == '\0') || (*pcVar2 == '\x03')) {
        if (param_2 == '\0') {
          *pcVar2 = '\x03';
        }
        else {
          *pcVar2 = '\0';
        }
      }
    }
  }
  return;
}

