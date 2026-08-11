/* Ghidra address: 009e3ef0 */
/* Ghidra symbol: FUN_009e3ef0 */


int FUN_009e3ef0(undefined8 param_1,ushort *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  cVar1 = *param_3;
  if (cVar1 == '\x01') {
    *(undefined *)param_2 = (&DAT_01e43050)[(byte)param_3[1]];
    *(undefined1 *)((longlong)param_2 + 1) = 0x3d;
    *(undefined1 *)(param_2 + 1) = 0x3d;
    param_2 = (ushort *)((longlong)param_2 + 3);
  }
  else if (cVar1 == '\x02') {
    *(undefined *)param_2 = (&DAT_01e43050)[(byte)param_3[1]];
    *(undefined1 *)((longlong)param_2 + 1) = 0x3d;
    param_2 = param_2 + 1;
  }
  else if (cVar1 == '\x04') {
    *param_2 = (ushort)(byte)(&DAT_01e43050)[(byte)param_3[1]];
    param_2[1] = 0x3d;
    param_2[2] = 0x3d;
    param_2 = param_2 + 3;
  }
  else if (cVar1 == '\x05') {
    *param_2 = (ushort)(byte)(&DAT_01e43050)[(byte)param_3[1]];
    param_2[1] = 0x3d;
    param_2 = param_2 + 2;
  }
  return (int)param_2 - iVar2;
}

